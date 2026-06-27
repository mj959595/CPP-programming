# ===================== IMPORT LIBRARIES =====================
import matplotlib.pyplot as plt
import pandas as pd
import random
from collections import Counter
from datetime import datetime
from scapy.all import sniff, IP, TCP, UDP, ICMP


# ===================== PACKET GENERATION =====================
def generate_packets(n=120):
    ips = [
        "192.168.1.1", "192.168.1.2", "10.0.0.5",
        "10.0.0.6", "8.8.8.8", "1.1.1.1"
    ]

    protocols = ["TCP", "UDP", "ICMP", "OTHER"]
    ports = [80, 443, 22, 21, 53, 8080]

    data = []

    for _ in range(n):
        proto = random.choice(protocols)

        data.append({
            "Time": datetime.now().strftime("%Y-%m-%d %H:%M:%S"),
            "Source IP": random.choice(ips),
            "Destination IP": random.choice(ips),
            "Destination Port": random.choice(ports),
            "Protocol": proto,
            "Size": random.randint(60, 1500)
        })

    return pd.DataFrame(data)


# ===================== DATA =====================
df = generate_packets(120)


# ===================== SAVE CSV =====================
df.to_csv("packets.csv", index=False)
print("✅ CSV saved: captured_packets.csv")


# ===================== TERMINAL LOG =====================
print("\n================ PACKET CAPTURE LOG (FIRST 20) ================\n")

for _, row in df.head(20).iterrows():
    print(
        f"{row['Time']} | {row['Source IP']} -> {row['Destination IP']} | "
        f"{row['Protocol']} | PORT {row['Destination Port']} | SIZE {row['Size']}"
    )

print("\nTOTAL PACKETS:", len(df))


# ===================== PROTOCOL ANALYSIS =====================
protocol_counts = df["Protocol"].value_counts().to_dict()

tcp_count = protocol_counts.get("TCP", 0)
udp_count = protocol_counts.get("UDP", 0)
icmp_count = protocol_counts.get("ICMP", 0)
other_count = protocol_counts.get("OTHER", 0)

protocol_labels = ["TCP", "UDP", "ICMP", "OTHER"]
protocol_values = [tcp_count, udp_count, icmp_count, other_count]


# ===================== TOP LISTS =====================
top_src = Counter(df["Source IP"]).most_common(5)
top_dst = Counter(df["Destination IP"]).most_common(5)
top_ports = Counter(df["Destination Port"]).most_common(5)


# ===================== SAVE FUNCTION =====================
def save_fig(name):
    plt.savefig(name, dpi=300, bbox_inches="tight")


# ===================== 1. PIE CHART =====================
plt.figure(figsize=(6, 6))

plt.pie(
    protocol_values,
    labels=protocol_labels,
    autopct="%1.1f%%",
    colors=["#4DA3FF", "#2EE59D", "#FF4D6D", "#FFB020"]
)

plt.title("Protocol Distribution")
save_fig("01_protocol_pie.png")
plt.show()


# ===================== 2. BAR CHART =====================
plt.figure(figsize=(6, 5))

plt.bar(protocol_labels, protocol_values, color="#8A5CFF")

plt.title("Protocol Count")
save_fig("02_protocol_bar.png")
plt.show()


# ===================== 3. TOP SOURCE IP =====================
plt.figure(figsize=(8, 5))

plt.bar([i[0] for i in top_src], [i[1] for i in top_src], color="#4DA3FF")

plt.title("Top Source IPs")
plt.xticks(rotation=45)
save_fig("03_source_ips.png")
plt.show()


# ===================== 4. TOP DESTINATION IP =====================
plt.figure(figsize=(8, 5))

plt.bar([i[0] for i in top_dst], [i[1] for i in top_dst], color="#2EE59D")

plt.title("Top Destination IPs")
plt.xticks(rotation=45)
save_fig("04_destination_ips.png")
plt.show()


# ===================== 5. TOP DESTINATION PORTS =====================
plt.figure(figsize=(8, 5))

plt.bar([str(i[0]) for i in top_ports], [i[1] for i in top_ports], color="#FFB020")

plt.title("Top Destination Ports")
save_fig("05_ports.png")
plt.show()


# ===================== 6. PROFESSIONAL DASHBOARD =====================
fig, axs = plt.subplots(2, 2, figsize=(14, 9))

fig.subplots_adjust(top=0.82, hspace=0.35, wspace=0.25)

# ===================== TITLE =====================
fig.suptitle(
    "NETWORK TRAFFIC ANALYTICS DASHBOARD",
    fontsize=18,
    fontweight="bold",
    color="#2C3E50"
)

# ===================== KPI BAR =====================
total_packets = len(df)

kpi_text = (
    f"TOTAL PACKETS: {total_packets}   |   "
    f"TCP: {tcp_count}   UDP: {udp_count}   "
    f"ICMP: {icmp_count}   OTHER: {other_count}"
)

fig.text(
    0.5, 0.92,
    kpi_text,
    ha="center",
    fontsize=11,
    fontweight="bold",
    bbox=dict(facecolor="#F4F6F7", edgecolor="#BDC3C7", boxstyle="round,pad=0.5")
)

# ===================== TOP PORTS PANEL =====================
top_ports_text = "\n".join(
    [f"Port {port}: {count}" for port, count in top_ports]
)

fig.text(
    0.02, 0.88,
    "TOP DESTINATION PORTS\n" + top_ports_text,
    fontsize=10,
    va="top",
    ha="left",
    bbox=dict(facecolor="#FFFFFF", edgecolor="#D5D8DC", boxstyle="round,pad=0.5", alpha=0.95)
)

# ===================== PIE CHART =====================
axs[0, 0].pie(
    protocol_values,
    labels=protocol_labels,
    autopct="%1.1f%%",
    colors=["#4DA3FF", "#2EE59D", "#FF4D6D", "#FFB020"],
    startangle=90,
    wedgeprops={"edgecolor": "white"}
)
axs[0, 0].set_title("Protocol Distribution", fontweight="bold")

# ===================== BAR CHART =====================
axs[0, 1].bar(
    protocol_labels,
    protocol_values,
    color="#8A5CFF",
    edgecolor="black"
)
axs[0, 1].set_title("Protocol Count", fontweight="bold")

# ===================== SOURCE IPS =====================
axs[1, 0].bar(
    [i[0] for i in top_src],
    [i[1] for i in top_src],
    color="#4DA3FF",
    edgecolor="black"
)
axs[1, 0].set_title("Top Source IPs", fontweight="bold")
axs[1, 0].tick_params(axis='x', rotation=45)

# ===================== DESTINATION IPS =====================
axs[1, 1].bar(
    [i[0] for i in top_dst],
    [i[1] for i in top_dst],
    color="#2EE59D",
    edgecolor="black"
)
axs[1, 1].set_title("Top Destination IPs", fontweight="bold")
axs[1, 1].tick_params(axis='x', rotation=45)

# ===================== FINAL LAYOUT =====================
plt.tight_layout(rect=[0, 0, 1, 0.86])

save_fig("06_dashboard_summary.png")
plt.show()