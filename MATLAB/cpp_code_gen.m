cfg = coder.config('lib');
cfg.GenCodeOnly = true;
cfg.TargetLang = 'C++';
cfg.CppInterfaceStyle = 'Methods';
cfg.CppInterfaceClassName = 'algoClass';
codegen computeHyperPlans -config cfg -report -args {0,0,0,0,0,0} -d withClass