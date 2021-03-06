const byte HalloWorldSnippet[]={
"	// an 'advanced' hello world example,\n"
"	// it shows usage of commandLiner.h's parameter handling:\n"
"	//\n"
"	// the user can define additional individuals to let them greet:\n"
"	//    - by passing raw parameters\n	//\n"
"	// and it optionally says 'bye bye' also:\n"
"	//    - by passing switch '-b'\n	//\n"
"	// and to choose the phrase it will use for saying bye:\n"
"	//    - by passing option '--b-<byePhrase>'\n\n\n"
"	// add a default individuum to greet if no others where passed\n"
"    setOption('w',\"World\");\n\n"
"	// output any recognized userinputs when -v (verbose) was passed also\n"
"    if(hasOption('v'))\n"
"        showOptions();\n\n"
"	// look if any additional idividuums to greet where defined:\n"
"    if(numGum())// filter out options, like '-b' or '-v' switchs.\n"
"        for(int i=0;i<numGum();i++)// thees don't need greetings.\n"
"            if( isModus(getNameByIndex(i))\n"
"            && !nameWasSwitched(getNameByIndex(i)))\n"
"                printf(\"hallo %s\\n\",getNameByIndex(i));\n\n"
"	// greet the default 'world' individuum\n"
"	// we just defined before\n"
"    printf(\"Hallo %s\\n\",getName('w'));\n\n"
"	// say 'bye' if '-b' switch was enabled\n"
"    if(hasOption('b')) // use the user choosen phrase,\n"
"        printf(\"...%s\",getName('b')[0] ?// or if none, use the default\n"
"                          getName('b') : \"bye bye!\\n\" );\n\n"
"	// retun some greeting to the system if '-b' switch is enabled.\n"
"	return hasOption('b');\n\n"
};