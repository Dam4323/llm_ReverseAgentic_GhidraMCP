# llm_ReverseAgentic_GhidraMCP

## audit_target

Laboratoire pratique d'analyse de binaire et de retro-ingenierie assistee par llm (ghidra, mcp, cline).

## Contenu du dossier

* `audit_target` : binaire elf compile (x86-64)
* `_Entry_Assembly.png` : desassemblage du point d'entree `entry`
* `_Entry_Visualisation.png` : vue decompactee du point d'entree
* `FlowGraph.png` : graphe de flux (`entry` vers `__libc_start_main`)
* `AST-DATA.png` : graphe de flux de donnees et arbre syntaxique ghidra
* `CallGraph.png` : graphe d'appels
* `ASTFLOW.json`, `blocflow.json`, `cggraph.json`, `codeflowgraph.json` : exports json des structures de controle et de flux

## Utilite

Ce dépôt fournit les supports pour :
* analyser la sequence d'initialisation du binaire (`entry`, libc)
* etudier les graphes de flux de controle et de donnees
* evaluer l'aide d'un llm local via mcp pour l'analyse de code
