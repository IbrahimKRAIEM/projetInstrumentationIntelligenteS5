1 Objectifs
    Votre objectif est de réaliser en binôme la supervision de la température de la pièce à l’aide de 3 capteurs de
    température. L’affichage de la température mesurée par chaque capteur doit être réalisée :
    — insitu sur le LCD
    — sur une interface de supervision de type node-RED. Sur celle-ci l’affichage de celle-ci doit être horodatée.
    La transmission d’information entre le système d’acquisition et le PC sera réalisé au moyen d’un câble USB.

2 Moyens à disposition
    2.1 Moyens matériels :
    — PC avec OS GNU/Linux Debian bullseye de la salle E022
    — un générateur basses fréquences Métrix GX320
    — un oscilloscope Rhodes & Shwartz 4 voies RTB2004
    — Carte PSoC CY8CKIT-059
    — une rallonge USB
    — écran LCD de 2 lignes de 16 caractères.
    — sonde de Platine : Pt 100
    — thermocouple type J
    — LM35CZ

2.2 Moyens logiciels :
    — Suite logicielle de la distribution GNU/Linux Debian en natif salle E022
    — Node-RED
    — Image virtuelle Windows 7 pour VMWare player avec le logiciel PSoC Creator 4.4 installé

3 Perspectives d’amélioration
    Si votre projet est opérationnel avant la dernière séance, vous pouvez :
    — enregistrer les valeurs des températures dans un fichier txt
    — créer une base de donnée pour l’enregistrement des valeurs
    — améliorer l’esthétique de l’interface de supervision
    — ajouter un serveur mqtt pour la transmission des infos à distance
    — ajouter un serveur http pour la consultation des infos sur une page web
    — etc.

4 Rendu final
    La recette réalisé à l’issue des 8 séances de travaux pratiques sera :
    — une démonstration devant l’enseignant
    — un compte-rendu du projet expliquant et détaillant les choix et configurations. Il comportera notamment :
    — une présentation du contexte et de la problématique
    — une brève présentation des capteurs utilisés et notamment leurs caractéristiques métrologiques essen-
    tielles (mesurande, étendue de mesure, sensibilité, . . .)
    — un schéma synoptique du projet
    — une description des choix de conception et la présentation des paramètres de configuration des points
    sensibles.