# 💧 Lympha — Smart H₂O

> *Dal latino* **Lympha** *→ acqua limpida.*  
> Un sistema IoT per il monitoraggio intelligente del consumo idrico domestico, con Digital Twin 3D in tempo reale.

**Progetto scolastico** realizzato per [Mega Hub](https://www.megahub.it/)  
**Team:** Ciobanu · Biasi · Caldana · Viceconte V

---

## Indice

- [Panoramica](#-panoramica)
- [Obiettivo](#-obiettivo)
- [Architettura del sistema](#️-architettura-del-sistema)
- [Funzionalità principali](#-funzionalità-principali)
- [Stack tecnologico](#-stack-tecnologico)
- [Struttura del repository](#-struttura-del-repository)
- [Installazione e avvio](#-installazione-e-avvio)
- [Configurazione sensori](#-configurazione-sensori)
- [Costi e risparmio](#-costi-e-risparmio)
- [Impatto ambientale](#-impatto-ambientale)
- [Team](#-team)

---

## 🌊 Panoramica

Lympha è un sistema IoT completo che trasforma il consumo d'acqua da un dato astratto — la bolletta — a un'esperienza visiva e interattiva in tempo reale.

Attraverso un **Digital Twin** dell'edificio, gli utenti possono:

- "vedere" l'acqua scorrere tra le mura in una vista isometrica 3D
- individuare sprechi e anomalie in tempo reale
- prevenire danni strutturali prima che diventino emergenze
- monitorare la qualità dell'acqua e lo stato dei filtri

---

## 🎯 Obiettivo

Il progetto nasce dalla volontà di rendere il consumo idrico domestico **comprensibile, misurabile e controllabile** da chiunque, senza competenze tecniche.

I tre pilastri del progetto:

| Pilastro | Descrizione |
|---|---|
| 🔍 **Monitoraggio** | Sensori IoT per qualità, portata e pressione in tempo reale |
| 🌿 **Sostenibilità** | Riduzione sprechi, eliminazione plastica monouso, acqua PFAS-free |
| 💡 **Semplicità** | App mobile + webApp accessibili a tutti, con Digital Twin intuitivo |

---

## 🏗️ Architettura del sistema

```
[Impianto idrico]
       │
  [Sensori IoT]  ←── TDS (ppm) · Portata (L/min) · Pressione (bar)
       │
  [Centralina]   ←── Scalabile, gestisce multipli input sensoriali
       │
   [Wi-Fi / Cloud]
       │
  ┌────┴────┐
  │  WebApp  │   ←── Dashboard · Analytics · Manutenzione · Builder
  │  Mobile  │   ←── Flutter (iOS + Android)
  └──────────┘
       │
  [Digital Twin 3D]  ←── Ricostruzione live dell'edificio
```

### Flusso dati

1. **Acquisizione** — I sensori rilevano TDS, portata e pressione in continuo
2. **Trasmissione** — La centralina invia i dati via Wi-Fi alla piattaforma cloud
3. **Elaborazione** — Il backend aggiorna il Digital Twin e calcola i KPI ambientali
4. **Visualizzazione** — L'utente accede ai dati via webApp o app mobile
5. **Alert** — Il sistema notifica anomalie, soglie superate, filtri da sostituire

---

## ✨ Funzionalità principali

### Dashboard — Panoramica Sistema
- Sensori in Tempo Reale: TDS, Portata, Pressione con badge di stato (Ottimale / Fermo / Bassa)
- **Spatial Twin** — Digital Twin 3D dell'edificio con live reconstruction e builder layout
- Stadi di filtrazione: Sedimentatore · Resine · Carboni · Ultra · UV-C
- **Lympha Wallet** — Crediti e risparmio economico accumulato

### Analytics — Dati dal Sensore
- KPI ambientali: Consumo Totale (L), Risparmio CO₂ (Kg), Plastica Evitata (bott.), Efficienza Filtro (%)
- Grafici live TDS Qualità Acqua e Portata con storico ultime 30 letture
- Sezione Impatto Ecologico con aggiornamento automatico

### Manutenzione
- Vita residua di ogni filtro con indicatore percentuale
- Calendario manutenzioni programmate
- Storico interventi

### Dispositivi
- Gestione sensori collegati
- Aggiunta nuovi dispositivi IoT
- Stato connessione in tempo reale

### Sistema di Alert
- Notifiche push per anomalie di pressione, portata anomala, qualità TDS degradata
- Alert manutenzione preventiva prima della scadenza filtri

---

## 🛠️ Stack tecnologico

| Layer | Tecnologia |
|---|---|
| **Mobile App** | Flutter (Dart) — iOS & Android |
| **Web App** | Flutter Web |
| **Sensori IoT** | Sensore TDS, Flussimetro, Sensore di pressione |
| **Comunicazione** | Wi-Fi → Cloud |
| **Digital Twin** | Rendering 3D isometrico custom (Builder integrato) |
| **Protocollo IoT** | Matter (plugin `flutter_matter`) |
| **CI/CD** | GitHub Actions |
| **Piattaforme** | Android · iOS · Web · Linux · macOS · Windows |

---

## 📁 Struttura del repository

```
Lympha/
├── lib/                    # Codice Dart principale (Flutter)
├── android/                # Configurazione Android
├── ios/                    # Configurazione iOS
├── web/                    # Build web
├── linux/                  # Build Linux
├── macos/                  # Build macOS
├── windows/                # Build Windows
├── Base UI/                # Componenti UI base
├── assets/
│   └── images/             # Asset grafici
├── logo/                   # Logo Lympha
├── plugins/
│   └── flutter_matter/     # Plugin Matter per IoT
├── test/                   # Test unitari
├── pubspec.yaml            # Dipendenze Flutter
├── pubspec.lock
└── .github/
    └── workflows/          # CI/CD GitHub Actions
```

---

## 🚀 Installazione e avvio

### Prerequisiti

- [Flutter SDK](https://flutter.dev/docs/get-started/install) ≥ 3.x
- Dart ≥ 3.x
- Android Studio / Xcode (per build mobile)

### Setup

```bash
# 1. Clona il repository
git clone https://github.com/Ciobert345/Lympha.git
cd Lympha

# 2. Installa le dipendenze
flutter pub get

# 3. Avvia l'app (scegli il target)
flutter run                    # dispositivo connesso / emulatore
flutter run -d chrome          # web browser
flutter run -d linux           # desktop Linux
```

### Build di produzione

```bash
# Android APK
flutter build apk --release

# iOS
flutter build ios --release

# Web
flutter build web --release
```

---

## ⚙️ Configurazione sensori

Per connettere i sensori fisici all'app è necessario configurare la centralina IoT.

1. Collega la centralina alla rete Wi-Fi domestica
2. Apri l'app → sezione **Dispositivi** → **+ Aggiungi**
3. Segui il wizard di pairing
4. Verifica la ricezione dati nella **Dashboard** (i valori devono uscire da `—`)

> **Nota:** senza sensori collegati, l'app funziona in modalità demo con dati simulati. Il Digital Twin Builder è disponibile anche offline.

### Sensori supportati

| Sensore | Unità | Range consigliato |
|---|---|---|
| TDS (qualità acqua) | ppm | 0–500 ppm (ottimale < 150) |
| Flussimetro (portata) | L/min | 0–20 L/min |
| Pressione | bar | 1–6 bar |

---

## 💰 Costi e risparmio

### Installazione

| Voce | Costo |
|---|---|
| Hardware: kit filtri + sensori IoT | **€ 450,00** una tantum |
| Manutenzione annuale (sostituzione filtri e resine) | **€ 120,00 / anno** |

### Risparmio stimato

Grazie agli alert IoT e all'eliminazione dell'acquisto di acqua in bottiglia, il sistema si ripaga completamente in circa **18 mesi**.

---

## 🌿 Impatto ambientale

Dati calcolati per la provincia di Vicenza:

| Indicatore | Risultato |
|---|---|
| 🍶 Riduzione plastica | ~ **624 bottiglie** eliminate / anno |
| 🌫️ Riduzione emissioni | ~ **45 kg di CO₂** risparmiati / anno |
| 💧 Riduzione spreco idrico | **15% – 25%** di consumo in meno |
| 🛡️ Sicurezza sanitaria | Abbattimento PFAS **certificato** |

---

## 👥 Team

Progetto sviluppato nell'ambito del percorso scolastico presso **[Mega Hub](https://www.megahub.it/)**.

| Nome | Ruolo |
|---|---|
| **Ciobanu** | Lead Developer |
| **Biasi** | Hardware & IoT |
| **Caldana** | UI/UX Design |
| **Viceconte V** | Backend & Cloud |

---

## 📄 Licenza

Progetto scolastico — tutti i diritti riservati al team Lympha.

---

<div align="center">
  <sub>Made with 💧 by Team Lympha · <a href="https://www.megahub.it/">Mega Hub</a></sub>
</div>