  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 38;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtP)
    ;%
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtP.noise_type
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% rtP.randSeed1
	  section.data(1).logicalSrcIdx = 1;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.randSeed2
	  section.data(2).logicalSrcIdx = 2;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtP.randSeed3
	  section.data(3).logicalSrcIdx = 3;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtP.randSeed4
	  section.data(4).logicalSrcIdx = 4;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtP.Coeff_han
	  section.data(1).logicalSrcIdx = 5;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.FFT_LENGTH
	  section.data(2).logicalSrcIdx = 6;
	  section.data(2).dtTransOffset = 256;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(3) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtP.noise_on_off
	  section.data(1).logicalSrcIdx = 7;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.runSim
	  section.data(2).logicalSrcIdx = 8;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(4) = section;
      clear section
      
      section.nData     = 13;
      section.data(13)  = dumData; %prealloc
      
	  ;% rtP.Counter_CountStep
	  section.data(1).logicalSrcIdx = 9;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.HydroRefUniform_MaxVal
	  section.data(2).logicalSrcIdx = 10;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtP.Hydro1Uniform_MaxVal
	  section.data(3).logicalSrcIdx = 11;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtP.Hydro2Uniform_MaxVal
	  section.data(4).logicalSrcIdx = 12;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtP.Hydro3Uniform_MaxVal
	  section.data(5).logicalSrcIdx = 13;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtP.HydroRefGaussian_MeanVal
	  section.data(6).logicalSrcIdx = 14;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtP.Hydro1Gaussian_MeanVal
	  section.data(7).logicalSrcIdx = 15;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtP.Hydro2Gaussian_MeanVal
	  section.data(8).logicalSrcIdx = 16;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtP.Hydro3Gaussian_MeanVal
	  section.data(9).logicalSrcIdx = 17;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtP.HydroRefUniform_MinVal
	  section.data(10).logicalSrcIdx = 18;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtP.Hydro1Uniform_MinVal
	  section.data(11).logicalSrcIdx = 19;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtP.Hydro2Uniform_MinVal
	  section.data(12).logicalSrcIdx = 20;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtP.Hydro3Uniform_MinVal
	  section.data(13).logicalSrcIdx = 21;
	  section.data(13).dtTransOffset = 12;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(5) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% rtP.HydroRefUniform_rawSeed
	  section.data(1).logicalSrcIdx = 22;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.Hydro1Uniform_rawSeed
	  section.data(2).logicalSrcIdx = 23;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtP.Hydro2Uniform_rawSeed
	  section.data(3).logicalSrcIdx = 24;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtP.Hydro3Uniform_rawSeed
	  section.data(4).logicalSrcIdx = 25;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(6) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtP.CompareToConstant2_const
	  section.data(1).logicalSrcIdx = 26;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.MultiplyAccumulate_num_samples
	  section.data(2).logicalSrcIdx = 27;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(7) = section;
      clear section
      
      section.nData     = 52;
      section.data(52)  = dumData; %prealloc
      
	  ;% rtP.Elevation_Y0
	  section.data(1).logicalSrcIdx = 28;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.FromWorkspace_Time0
	  section.data(2).logicalSrcIdx = 29;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtP.FromWorkspace_Data0
	  section.data(3).logicalSrcIdx = 30;
	  section.data(3).dtTransOffset = 36450;
	
	  ;% rtP.Constant8_Value
	  section.data(4).logicalSrcIdx = 31;
	  section.data(4).dtTransOffset = 72899;
	
	  ;% rtP.HydroRefGaussian_VarianceRTP
	  section.data(5).logicalSrcIdx = 32;
	  section.data(5).dtTransOffset = 72900;
	
	  ;% rtP.DiscretePulseGenerator_Amp
	  section.data(6).logicalSrcIdx = 33;
	  section.data(6).dtTransOffset = 72901;
	
	  ;% rtP.DiscretePulseGenerator_Period
	  section.data(7).logicalSrcIdx = 34;
	  section.data(7).dtTransOffset = 72902;
	
	  ;% rtP.DiscretePulseGenerator_Duty
	  section.data(8).logicalSrcIdx = 35;
	  section.data(8).dtTransOffset = 72903;
	
	  ;% rtP.DiscretePulseGenerator_PhaseDelay
	  section.data(9).logicalSrcIdx = 36;
	  section.data(9).dtTransOffset = 72904;
	
	  ;% rtP.FromWorkspace_Time0_ptk5nrwdws
	  section.data(10).logicalSrcIdx = 37;
	  section.data(10).dtTransOffset = 72905;
	
	  ;% rtP.FromWorkspace_Data0_i5gvxdearu
	  section.data(11).logicalSrcIdx = 38;
	  section.data(11).dtTransOffset = 136905;
	
	  ;% rtP.Constant19_Value
	  section.data(12).logicalSrcIdx = 39;
	  section.data(12).dtTransOffset = 200905;
	
	  ;% rtP.Constant12_Value
	  section.data(13).logicalSrcIdx = 40;
	  section.data(13).dtTransOffset = 200906;
	
	  ;% rtP.FromWorkspace1_Time0
	  section.data(14).logicalSrcIdx = 41;
	  section.data(14).dtTransOffset = 200907;
	
	  ;% rtP.FromWorkspace1_Data0
	  section.data(15).logicalSrcIdx = 42;
	  section.data(15).dtTransOffset = 237356;
	
	  ;% rtP.Constant9_Value
	  section.data(16).logicalSrcIdx = 43;
	  section.data(16).dtTransOffset = 273805;
	
	  ;% rtP.Hydro1Gaussian_VarianceRTP
	  section.data(17).logicalSrcIdx = 44;
	  section.data(17).dtTransOffset = 273806;
	
	  ;% rtP.DiscretePulseGenerator1_Amp
	  section.data(18).logicalSrcIdx = 45;
	  section.data(18).dtTransOffset = 273807;
	
	  ;% rtP.DiscretePulseGenerator1_Period
	  section.data(19).logicalSrcIdx = 46;
	  section.data(19).dtTransOffset = 273808;
	
	  ;% rtP.DiscretePulseGenerator1_Duty
	  section.data(20).logicalSrcIdx = 47;
	  section.data(20).dtTransOffset = 273809;
	
	  ;% rtP.DiscretePulseGenerator1_PhaseDelay
	  section.data(21).logicalSrcIdx = 48;
	  section.data(21).dtTransOffset = 273810;
	
	  ;% rtP.FromWorkspace1_Time0_jkinope2nl
	  section.data(22).logicalSrcIdx = 49;
	  section.data(22).dtTransOffset = 273811;
	
	  ;% rtP.FromWorkspace1_Data0_nosxsmx3gj
	  section.data(23).logicalSrcIdx = 50;
	  section.data(23).dtTransOffset = 337811;
	
	  ;% rtP.Constant18_Value
	  section.data(24).logicalSrcIdx = 51;
	  section.data(24).dtTransOffset = 401811;
	
	  ;% rtP.Constant13_Value
	  section.data(25).logicalSrcIdx = 52;
	  section.data(25).dtTransOffset = 401812;
	
	  ;% rtP.FromWorkspace2_Time0
	  section.data(26).logicalSrcIdx = 53;
	  section.data(26).dtTransOffset = 401813;
	
	  ;% rtP.FromWorkspace2_Data0
	  section.data(27).logicalSrcIdx = 54;
	  section.data(27).dtTransOffset = 438262;
	
	  ;% rtP.Constant10_Value
	  section.data(28).logicalSrcIdx = 55;
	  section.data(28).dtTransOffset = 474711;
	
	  ;% rtP.Hydro2Gaussian_VarianceRTP
	  section.data(29).logicalSrcIdx = 56;
	  section.data(29).dtTransOffset = 474712;
	
	  ;% rtP.DiscretePulseGenerator2_Amp
	  section.data(30).logicalSrcIdx = 57;
	  section.data(30).dtTransOffset = 474713;
	
	  ;% rtP.DiscretePulseGenerator2_Period
	  section.data(31).logicalSrcIdx = 58;
	  section.data(31).dtTransOffset = 474714;
	
	  ;% rtP.DiscretePulseGenerator2_Duty
	  section.data(32).logicalSrcIdx = 59;
	  section.data(32).dtTransOffset = 474715;
	
	  ;% rtP.DiscretePulseGenerator2_PhaseDelay
	  section.data(33).logicalSrcIdx = 60;
	  section.data(33).dtTransOffset = 474716;
	
	  ;% rtP.FromWorkspace2_Time0_hiuucoxmdi
	  section.data(34).logicalSrcIdx = 61;
	  section.data(34).dtTransOffset = 474717;
	
	  ;% rtP.FromWorkspace2_Data0_oj3slyh5nl
	  section.data(35).logicalSrcIdx = 62;
	  section.data(35).dtTransOffset = 538717;
	
	  ;% rtP.Constant17_Value
	  section.data(36).logicalSrcIdx = 63;
	  section.data(36).dtTransOffset = 602717;
	
	  ;% rtP.Constant14_Value
	  section.data(37).logicalSrcIdx = 64;
	  section.data(37).dtTransOffset = 602718;
	
	  ;% rtP.FromWorkspace3_Time0
	  section.data(38).logicalSrcIdx = 65;
	  section.data(38).dtTransOffset = 602719;
	
	  ;% rtP.FromWorkspace3_Data0
	  section.data(39).logicalSrcIdx = 66;
	  section.data(39).dtTransOffset = 639168;
	
	  ;% rtP.Constant11_Value
	  section.data(40).logicalSrcIdx = 67;
	  section.data(40).dtTransOffset = 675617;
	
	  ;% rtP.Hydro3Gaussian_VarianceRTP
	  section.data(41).logicalSrcIdx = 68;
	  section.data(41).dtTransOffset = 675618;
	
	  ;% rtP.DiscretePulseGenerator3_Amp
	  section.data(42).logicalSrcIdx = 69;
	  section.data(42).dtTransOffset = 675619;
	
	  ;% rtP.DiscretePulseGenerator3_Period
	  section.data(43).logicalSrcIdx = 70;
	  section.data(43).dtTransOffset = 675620;
	
	  ;% rtP.DiscretePulseGenerator3_Duty
	  section.data(44).logicalSrcIdx = 71;
	  section.data(44).dtTransOffset = 675621;
	
	  ;% rtP.DiscretePulseGenerator3_PhaseDelay
	  section.data(45).logicalSrcIdx = 72;
	  section.data(45).dtTransOffset = 675622;
	
	  ;% rtP.FromWorkspace3_Time0_hcdwgnsiex
	  section.data(46).logicalSrcIdx = 73;
	  section.data(46).dtTransOffset = 675623;
	
	  ;% rtP.FromWorkspace3_Data0_g4i3qf1zgi
	  section.data(47).logicalSrcIdx = 74;
	  section.data(47).dtTransOffset = 739623;
	
	  ;% rtP.Constant16_Value
	  section.data(48).logicalSrcIdx = 75;
	  section.data(48).dtTransOffset = 803623;
	
	  ;% rtP.Constant15_Value
	  section.data(49).logicalSrcIdx = 76;
	  section.data(49).dtTransOffset = 803624;
	
	  ;% rtP.FromWorkspace4_Time0
	  section.data(50).logicalSrcIdx = 77;
	  section.data(50).dtTransOffset = 803625;
	
	  ;% rtP.FromWorkspace4_Data0
	  section.data(51).logicalSrcIdx = 78;
	  section.data(51).dtTransOffset = 1532605;
	
	  ;% rtP.Constant5_Value
	  section.data(52).logicalSrcIdx = 79;
	  section.data(52).dtTransOffset = 2261585;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(8) = section;
      clear section
      
      section.nData     = 23;
      section.data(23)  = dumData; %prealloc
      
	  ;% rtP.Debug_Y0
	  section.data(1).logicalSrcIdx = 80;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.Delay3_InitialCondition
	  section.data(2).logicalSrcIdx = 81;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtP.Delay5_InitialCondition
	  section.data(3).logicalSrcIdx = 82;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtP.Delay1_InitialCondition
	  section.data(4).logicalSrcIdx = 83;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtP.Delay3_InitialCondition_pickqde1ag
	  section.data(5).logicalSrcIdx = 84;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtP.Delay5_InitialCondition_ik0uapiiiu
	  section.data(6).logicalSrcIdx = 85;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtP.Delay1_InitialCondition_k0qiqlztjz
	  section.data(7).logicalSrcIdx = 86;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtP.Delay3_InitialCondition_k1euoqie50
	  section.data(8).logicalSrcIdx = 87;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtP.Delay5_InitialCondition_m2inlzix1d
	  section.data(9).logicalSrcIdx = 88;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtP.Delay1_InitialCondition_anmb4aswmb
	  section.data(10).logicalSrcIdx = 89;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtP.Delay3_InitialCondition_prak4zttvc
	  section.data(11).logicalSrcIdx = 90;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtP.Delay5_InitialCondition_m0hyxmjxie
	  section.data(12).logicalSrcIdx = 91;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtP.Delay1_InitialCondition_lvsyliwo3l
	  section.data(13).logicalSrcIdx = 92;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtP.accumulator_InitialCondition
	  section.data(14).logicalSrcIdx = 93;
	  section.data(14).dtTransOffset = 13;
	
	  ;% rtP.Constant1_Value
	  section.data(15).logicalSrcIdx = 94;
	  section.data(15).dtTransOffset = 14;
	
	  ;% rtP.Constant_Value
	  section.data(16).logicalSrcIdx = 95;
	  section.data(16).dtTransOffset = 15;
	
	  ;% rtP.const_initValue_Value
	  section.data(17).logicalSrcIdx = 96;
	  section.data(17).dtTransOffset = 16;
	
	  ;% rtP.Delay2_InitialCondition
	  section.data(18).logicalSrcIdx = 97;
	  section.data(18).dtTransOffset = 17;
	
	  ;% rtP.Delay2_InitialCondition_bdi2hgqnsd
	  section.data(19).logicalSrcIdx = 98;
	  section.data(19).dtTransOffset = 18;
	
	  ;% rtP.Delay2_InitialCondition_gawb3gb4t4
	  section.data(20).logicalSrcIdx = 99;
	  section.data(20).dtTransOffset = 19;
	
	  ;% rtP.Delay2_InitialCondition_jnqe2wfvxz
	  section.data(21).logicalSrcIdx = 100;
	  section.data(21).dtTransOffset = 20;
	
	  ;% rtP.Heading_Y0
	  section.data(22).logicalSrcIdx = 101;
	  section.data(22).dtTransOffset = 21;
	
	  ;% rtP.Switch_Threshold
	  section.data(23).logicalSrcIdx = 102;
	  section.data(23).dtTransOffset = 22;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(9) = section;
      clear section
      
      section.nData     = 9;
      section.data(9)  = dumData; %prealloc
      
	  ;% rtP.Delay_InitialCondition
	  section.data(1).logicalSrcIdx = 103;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.Delay_InitialCondition_bnlicvg4x5
	  section.data(2).logicalSrcIdx = 104;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtP.Delay_InitialCondition_hj3wqbizb5
	  section.data(3).logicalSrcIdx = 105;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtP.Delay_InitialCondition_nyvai1lye2
	  section.data(4).logicalSrcIdx = 106;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtP.Delay_InitialCondition_niqoq5ke02
	  section.data(5).logicalSrcIdx = 107;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtP.Delay_InitialCondition_cx2vyd0dua
	  section.data(6).logicalSrcIdx = 108;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtP.Delay_InitialCondition_bw4pyzqhu0
	  section.data(7).logicalSrcIdx = 109;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtP.Delay_InitialCondition_jlvaialaps
	  section.data(8).logicalSrcIdx = 110;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtP.Frquence_Y0
	  section.data(9).logicalSrcIdx = 111;
	  section.data(9).dtTransOffset = 8;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(10) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% rtP.Switch_wrap_Threshold
	  section.data(1).logicalSrcIdx = 112;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.Constant6_Value
	  section.data(2).logicalSrcIdx = 113;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtP.Constant2_Value
	  section.data(3).logicalSrcIdx = 114;
	  section.data(3).dtTransOffset = 10;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(11) = section;
      clear section
      
      section.nData     = 18;
      section.data(18)  = dumData; %prealloc
      
	  ;% rtP.Constant5_Value_m1sv0yladi
	  section.data(1).logicalSrcIdx = 115;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.Mod_value_Value
	  section.data(2).logicalSrcIdx = 116;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtP.Switch_wrap_Threshold_nwklm2s0m1
	  section.data(3).logicalSrcIdx = 117;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtP.Mod_value_Value_a0wdzolmlj
	  section.data(4).logicalSrcIdx = 118;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtP.Constant10_Value_jsm3u35ioa
	  section.data(5).logicalSrcIdx = 119;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtP.Count_reg_InitialCondition
	  section.data(6).logicalSrcIdx = 120;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtP.Step_value_Value
	  section.data(7).logicalSrcIdx = 121;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtP.Constant_Value_gcf3fdx4dg
	  section.data(8).logicalSrcIdx = 122;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtP.const_load_val_Value
	  section.data(9).logicalSrcIdx = 123;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtP.From_value_Value
	  section.data(10).logicalSrcIdx = 124;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtP.Init_value_Value
	  section.data(11).logicalSrcIdx = 125;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtP.Delay4_InitialCondition
	  section.data(12).logicalSrcIdx = 126;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtP.Constant_Value_k2m2r1p0jl
	  section.data(13).logicalSrcIdx = 127;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtP.Delay_InitialCondition_orxywa3mun
	  section.data(14).logicalSrcIdx = 128;
	  section.data(14).dtTransOffset = 13;
	
	  ;% rtP.Constant1_Value_bfosepbrju
	  section.data(15).logicalSrcIdx = 129;
	  section.data(15).dtTransOffset = 14;
	
	  ;% rtP.Constant2_Value_jbobxqjm0i
	  section.data(16).logicalSrcIdx = 130;
	  section.data(16).dtTransOffset = 15;
	
	  ;% rtP.Constant_Value_c3xhjopelp
	  section.data(17).logicalSrcIdx = 131;
	  section.data(17).dtTransOffset = 16;
	
	  ;% rtP.Constant1_Value_d2ev0f3vow
	  section.data(18).logicalSrcIdx = 132;
	  section.data(18).dtTransOffset = 17;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(12) = section;
      clear section
      
      section.nData     = 15;
      section.data(15)  = dumData; %prealloc
      
	  ;% rtP._Y0
	  section.data(1).logicalSrcIdx = 133;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.SNRcheck_Y0
	  section.data(2).logicalSrcIdx = 134;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtP.Delay_InitialCondition_ltuwqrdhlx
	  section.data(3).logicalSrcIdx = 135;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtP.Delay4_InitialCondition_lo5wt5wsup
	  section.data(4).logicalSrcIdx = 136;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtP.Delay4_InitialCondition_lmewri3pdc
	  section.data(5).logicalSrcIdx = 137;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtP.Delay4_InitialCondition_f1j4135pnp
	  section.data(6).logicalSrcIdx = 138;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtP.Delay4_InitialCondition_mudvlctgst
	  section.data(7).logicalSrcIdx = 139;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtP.Delay_InitialCondition_jfvt1t4w5q
	  section.data(8).logicalSrcIdx = 140;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtP.Delay5_InitialCondition_lqhfqdrstc
	  section.data(9).logicalSrcIdx = 141;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtP.Delay1_InitialCondition_lcwjl5um2b
	  section.data(10).logicalSrcIdx = 142;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtP.const_dir_Value
	  section.data(11).logicalSrcIdx = 143;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtP.Free_running_or_modulo_Value
	  section.data(12).logicalSrcIdx = 144;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtP.const_load_Value
	  section.data(13).logicalSrcIdx = 145;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtP.const_rst_Value
	  section.data(14).logicalSrcIdx = 146;
	  section.data(14).dtTransOffset = 13;
	
	  ;% rtP.Delay3_InitialCondition_mbrzy231ng
	  section.data(15).logicalSrcIdx = 147;
	  section.data(15).dtTransOffset = 14;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(13) = section;
      clear section
      
      section.nData     = 14;
      section.data(14)  = dumData; %prealloc
      
	  ;% rtP.Constant1_Value_nlf2bzkh50
	  section.data(1).logicalSrcIdx = 148;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.Constant1_Value_b1zttvkvok
	  section.data(2).logicalSrcIdx = 149;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtP.Constant1_Value_aczkv0m5ge
	  section.data(3).logicalSrcIdx = 150;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtP.Constant1_Value_himxnbpp2r
	  section.data(4).logicalSrcIdx = 151;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtP.Constant3_Value
	  section.data(5).logicalSrcIdx = 152;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtP.Constant3_Value_jqozwsnzwm
	  section.data(6).logicalSrcIdx = 153;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtP.Constant3_Value_ds12tuqxh5
	  section.data(7).logicalSrcIdx = 154;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtP.Constant3_Value_oxgyqblygx
	  section.data(8).logicalSrcIdx = 155;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtP.Constant2_Value_gobzdswdh5
	  section.data(9).logicalSrcIdx = 156;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtP.Constant2_Value_l5zecvkn2f
	  section.data(10).logicalSrcIdx = 157;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtP.Constant2_Value_kgtjfzvqpt
	  section.data(11).logicalSrcIdx = 158;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtP.Constant2_Value_fbnqm44bzy
	  section.data(12).logicalSrcIdx = 159;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtP.Constant1_Value_eeh12bmm2g
	  section.data(13).logicalSrcIdx = 160;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtP.DirectLookupTablenD_DiagnosticForOutOfRangeInput
	  section.data(14).logicalSrcIdx = 161;
	  section.data(14).dtTransOffset = 13;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(14) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtP.kpjzhjqrqw._Y0
	  section.data(1).logicalSrcIdx = 162;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(15) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtP.popnzdb3ry._Y0
	  section.data(1).logicalSrcIdx = 163;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(16) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtP.crejvlo0y5._Y0
	  section.data(1).logicalSrcIdx = 164;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(17) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtP.kb0c50ld2h._Y0
	  section.data(1).logicalSrcIdx = 165;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(18) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtP.l4kbtxpaxe._Y0
	  section.data(1).logicalSrcIdx = 166;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(19) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtP.kwch3e15c1._Y0
	  section.data(1).logicalSrcIdx = 167;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(20) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtP.ep4zp2asi5._Y0
	  section.data(1).logicalSrcIdx = 168;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(21) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtP.ifacholhbj._Y0
	  section.data(1).logicalSrcIdx = 169;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(22) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtP.kcj1xw2fyj._Y0
	  section.data(1).logicalSrcIdx = 170;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(23) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtP.gis5nx3d51._Y0
	  section.data(1).logicalSrcIdx = 171;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(24) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtP.jesurwi24z._Y0
	  section.data(1).logicalSrcIdx = 172;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(25) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtP.gqsds1azit._Y0
	  section.data(1).logicalSrcIdx = 173;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(26) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtP.eygzwxr3yp._Y0
	  section.data(1).logicalSrcIdx = 174;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(27) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtP.ppbi33hazt._Y0
	  section.data(1).logicalSrcIdx = 175;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(28) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtP.hsz3hkboep._Y0
	  section.data(1).logicalSrcIdx = 176;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(29) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtP.hvquu0midq._Y0
	  section.data(1).logicalSrcIdx = 177;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(30) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtP.fhzqhbrdcr._Y0
	  section.data(1).logicalSrcIdx = 178;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(31) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtP.etzyrbzjj0._Y0
	  section.data(1).logicalSrcIdx = 179;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(32) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtP.aqmj5gejllk._Y0
	  section.data(1).logicalSrcIdx = 180;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(33) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtP.nirnnu0kb5e._Y0
	  section.data(1).logicalSrcIdx = 181;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(34) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtP.hamu3nooom._Y0
	  section.data(1).logicalSrcIdx = 182;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(35) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtP.jgkqqwc2m5a._Y0
	  section.data(1).logicalSrcIdx = 183;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(36) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtP.n014eikjcjy._Y0
	  section.data(1).logicalSrcIdx = 184;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(37) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtP.otw02eo3ue3._Y0
	  section.data(1).logicalSrcIdx = 185;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(38) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (parameter)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    paramMap.nTotData = nTotData;
    


  ;%**************************
  ;% Create Block Output Map *
  ;%**************************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 45;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
      sigMap.sections(nTotSects) = dumSection; %prealloc
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtB)
    ;%
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.axdfvwdyot
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.oh0heldnt4
	  section.data(1).logicalSrcIdx = 1;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.lmktwyzsxa
	  section.data(1).logicalSrcIdx = 2;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(3) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtB.c0xui1wk2i
	  section.data(1).logicalSrcIdx = 3;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.ephpqceyqu
	  section.data(2).logicalSrcIdx = 4;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(4) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtB.ghr21v0y4h
	  section.data(1).logicalSrcIdx = 5;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.dsfwlmxmgm
	  section.data(2).logicalSrcIdx = 6;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(5) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.c1az4ldf0t
	  section.data(1).logicalSrcIdx = 7;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(6) = section;
      clear section
      
      section.nData     = 67;
      section.data(67)  = dumData; %prealloc
      
	  ;% rtB.h0wwdil5ui
	  section.data(1).logicalSrcIdx = 8;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.pz0khc11b5
	  section.data(2).logicalSrcIdx = 9;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtB.cfkib4snni
	  section.data(3).logicalSrcIdx = 10;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtB.cnsob1xib2
	  section.data(4).logicalSrcIdx = 11;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtB.fisoyvpapb
	  section.data(5).logicalSrcIdx = 12;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtB.eulypohvkk
	  section.data(6).logicalSrcIdx = 13;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtB.aeamlgo5gw
	  section.data(7).logicalSrcIdx = 14;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtB.otre0btlht
	  section.data(8).logicalSrcIdx = 15;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtB.lv4vwau52m
	  section.data(9).logicalSrcIdx = 16;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtB.pseuhan1y2
	  section.data(10).logicalSrcIdx = 17;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtB.fjgn2cj4vb
	  section.data(11).logicalSrcIdx = 18;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtB.lh4yuikz0y
	  section.data(12).logicalSrcIdx = 19;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtB.bspaznhyu3
	  section.data(13).logicalSrcIdx = 20;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtB.mhihwha20c
	  section.data(14).logicalSrcIdx = 21;
	  section.data(14).dtTransOffset = 13;
	
	  ;% rtB.h3ybus3uc4
	  section.data(15).logicalSrcIdx = 22;
	  section.data(15).dtTransOffset = 14;
	
	  ;% rtB.pdhm5ddrn5
	  section.data(16).logicalSrcIdx = 23;
	  section.data(16).dtTransOffset = 15;
	
	  ;% rtB.geaxy0tifm
	  section.data(17).logicalSrcIdx = 24;
	  section.data(17).dtTransOffset = 16;
	
	  ;% rtB.fwsifagno3
	  section.data(18).logicalSrcIdx = 25;
	  section.data(18).dtTransOffset = 17;
	
	  ;% rtB.a520fdraqw
	  section.data(19).logicalSrcIdx = 26;
	  section.data(19).dtTransOffset = 18;
	
	  ;% rtB.aq5pk0b3dg
	  section.data(20).logicalSrcIdx = 27;
	  section.data(20).dtTransOffset = 19;
	
	  ;% rtB.fw0ry5jnvj
	  section.data(21).logicalSrcIdx = 28;
	  section.data(21).dtTransOffset = 20;
	
	  ;% rtB.o1yqldlqxa
	  section.data(22).logicalSrcIdx = 29;
	  section.data(22).dtTransOffset = 21;
	
	  ;% rtB.frlnsjjc1e
	  section.data(23).logicalSrcIdx = 30;
	  section.data(23).dtTransOffset = 22;
	
	  ;% rtB.m2nqhnhosf
	  section.data(24).logicalSrcIdx = 31;
	  section.data(24).dtTransOffset = 23;
	
	  ;% rtB.kizepetnhb
	  section.data(25).logicalSrcIdx = 32;
	  section.data(25).dtTransOffset = 24;
	
	  ;% rtB.bnjhosy04c
	  section.data(26).logicalSrcIdx = 33;
	  section.data(26).dtTransOffset = 25;
	
	  ;% rtB.kdy34jl3d0
	  section.data(27).logicalSrcIdx = 34;
	  section.data(27).dtTransOffset = 26;
	
	  ;% rtB.jiv0ptzxj3
	  section.data(28).logicalSrcIdx = 35;
	  section.data(28).dtTransOffset = 27;
	
	  ;% rtB.ai0nkoyyzf
	  section.data(29).logicalSrcIdx = 36;
	  section.data(29).dtTransOffset = 28;
	
	  ;% rtB.ftprthij4n
	  section.data(30).logicalSrcIdx = 37;
	  section.data(30).dtTransOffset = 29;
	
	  ;% rtB.j1lgr3ytyp
	  section.data(31).logicalSrcIdx = 38;
	  section.data(31).dtTransOffset = 30;
	
	  ;% rtB.c4cuktnwdp
	  section.data(32).logicalSrcIdx = 39;
	  section.data(32).dtTransOffset = 31;
	
	  ;% rtB.oxdfqwae0k
	  section.data(33).logicalSrcIdx = 40;
	  section.data(33).dtTransOffset = 32;
	
	  ;% rtB.lknmgvjqgn
	  section.data(34).logicalSrcIdx = 41;
	  section.data(34).dtTransOffset = 33;
	
	  ;% rtB.onjsdyh32p
	  section.data(35).logicalSrcIdx = 42;
	  section.data(35).dtTransOffset = 34;
	
	  ;% rtB.hju5mvez0a
	  section.data(36).logicalSrcIdx = 43;
	  section.data(36).dtTransOffset = 35;
	
	  ;% rtB.mkm0lv1mks
	  section.data(37).logicalSrcIdx = 44;
	  section.data(37).dtTransOffset = 36;
	
	  ;% rtB.kn5tnjdgbo
	  section.data(38).logicalSrcIdx = 45;
	  section.data(38).dtTransOffset = 37;
	
	  ;% rtB.c0bjpvlg5a
	  section.data(39).logicalSrcIdx = 46;
	  section.data(39).dtTransOffset = 38;
	
	  ;% rtB.f3kqzrcgy4
	  section.data(40).logicalSrcIdx = 47;
	  section.data(40).dtTransOffset = 39;
	
	  ;% rtB.e5l3jz4xat
	  section.data(41).logicalSrcIdx = 48;
	  section.data(41).dtTransOffset = 40;
	
	  ;% rtB.fmn5g1jnc1
	  section.data(42).logicalSrcIdx = 49;
	  section.data(42).dtTransOffset = 41;
	
	  ;% rtB.fqf5psyxso
	  section.data(43).logicalSrcIdx = 50;
	  section.data(43).dtTransOffset = 42;
	
	  ;% rtB.kt03sbrd2l
	  section.data(44).logicalSrcIdx = 51;
	  section.data(44).dtTransOffset = 43;
	
	  ;% rtB.hapqonhpcl
	  section.data(45).logicalSrcIdx = 52;
	  section.data(45).dtTransOffset = 44;
	
	  ;% rtB.fytjznpmnc
	  section.data(46).logicalSrcIdx = 53;
	  section.data(46).dtTransOffset = 45;
	
	  ;% rtB.d2sirds33k
	  section.data(47).logicalSrcIdx = 54;
	  section.data(47).dtTransOffset = 46;
	
	  ;% rtB.fcpveaaqxk
	  section.data(48).logicalSrcIdx = 55;
	  section.data(48).dtTransOffset = 47;
	
	  ;% rtB.cs0uc5ej5i
	  section.data(49).logicalSrcIdx = 56;
	  section.data(49).dtTransOffset = 48;
	
	  ;% rtB.n1elti22an
	  section.data(50).logicalSrcIdx = 57;
	  section.data(50).dtTransOffset = 49;
	
	  ;% rtB.o4oi1jwcpq
	  section.data(51).logicalSrcIdx = 58;
	  section.data(51).dtTransOffset = 50;
	
	  ;% rtB.nexgq2cuwu
	  section.data(52).logicalSrcIdx = 59;
	  section.data(52).dtTransOffset = 51;
	
	  ;% rtB.l2uvxsydr5
	  section.data(53).logicalSrcIdx = 60;
	  section.data(53).dtTransOffset = 52;
	
	  ;% rtB.m1qpxl0jpv
	  section.data(54).logicalSrcIdx = 61;
	  section.data(54).dtTransOffset = 53;
	
	  ;% rtB.mom23gv2k5
	  section.data(55).logicalSrcIdx = 62;
	  section.data(55).dtTransOffset = 54;
	
	  ;% rtB.mqo1g135dm
	  section.data(56).logicalSrcIdx = 63;
	  section.data(56).dtTransOffset = 55;
	
	  ;% rtB.bl0nn1bu04
	  section.data(57).logicalSrcIdx = 64;
	  section.data(57).dtTransOffset = 56;
	
	  ;% rtB.o5vvxznplh
	  section.data(58).logicalSrcIdx = 65;
	  section.data(58).dtTransOffset = 57;
	
	  ;% rtB.h5qnu5edjj
	  section.data(59).logicalSrcIdx = 66;
	  section.data(59).dtTransOffset = 58;
	
	  ;% rtB.mjw0pogy4h
	  section.data(60).logicalSrcIdx = 67;
	  section.data(60).dtTransOffset = 59;
	
	  ;% rtB.cfsq0ynnzy
	  section.data(61).logicalSrcIdx = 68;
	  section.data(61).dtTransOffset = 60;
	
	  ;% rtB.fy0onvvx1m
	  section.data(62).logicalSrcIdx = 69;
	  section.data(62).dtTransOffset = 61;
	
	  ;% rtB.diytyms0az
	  section.data(63).logicalSrcIdx = 70;
	  section.data(63).dtTransOffset = 62;
	
	  ;% rtB.jwjh4vm5vv
	  section.data(64).logicalSrcIdx = 71;
	  section.data(64).dtTransOffset = 63;
	
	  ;% rtB.pbeelgvdyf
	  section.data(65).logicalSrcIdx = 72;
	  section.data(65).dtTransOffset = 64;
	
	  ;% rtB.dnyct00tit
	  section.data(66).logicalSrcIdx = 73;
	  section.data(66).dtTransOffset = 65;
	
	  ;% rtB.fjeujynzc4
	  section.data(67).logicalSrcIdx = 74;
	  section.data(67).dtTransOffset = 66;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(7) = section;
      clear section
      
      section.nData     = 22;
      section.data(22)  = dumData; %prealloc
      
	  ;% rtB.j5nnsx2ha4
	  section.data(1).logicalSrcIdx = 75;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.nux3tj1dsw
	  section.data(2).logicalSrcIdx = 76;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtB.bns15ue0h0
	  section.data(3).logicalSrcIdx = 77;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtB.fajrh5ebvm
	  section.data(4).logicalSrcIdx = 78;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtB.cv0ayzwsev
	  section.data(5).logicalSrcIdx = 79;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtB.ac44xbjyzx
	  section.data(6).logicalSrcIdx = 80;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtB.im2uw1tffv
	  section.data(7).logicalSrcIdx = 81;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtB.lgkhemwe21
	  section.data(8).logicalSrcIdx = 82;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtB.i0htefbuzq
	  section.data(9).logicalSrcIdx = 83;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtB.mira15b04v
	  section.data(10).logicalSrcIdx = 84;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtB.kj5cas4vsk
	  section.data(11).logicalSrcIdx = 85;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtB.h53jwoi45y
	  section.data(12).logicalSrcIdx = 86;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtB.pomjv0rtxv
	  section.data(13).logicalSrcIdx = 87;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtB.jgkc41e1ur
	  section.data(14).logicalSrcIdx = 88;
	  section.data(14).dtTransOffset = 13;
	
	  ;% rtB.f14fitok5v
	  section.data(15).logicalSrcIdx = 89;
	  section.data(15).dtTransOffset = 14;
	
	  ;% rtB.l21b1nezu4
	  section.data(16).logicalSrcIdx = 90;
	  section.data(16).dtTransOffset = 15;
	
	  ;% rtB.p4prxjmuld
	  section.data(17).logicalSrcIdx = 91;
	  section.data(17).dtTransOffset = 16;
	
	  ;% rtB.jkzyotkqdr
	  section.data(18).logicalSrcIdx = 92;
	  section.data(18).dtTransOffset = 17;
	
	  ;% rtB.elhihgd2gr
	  section.data(19).logicalSrcIdx = 93;
	  section.data(19).dtTransOffset = 18;
	
	  ;% rtB.fm1pdhccer
	  section.data(20).logicalSrcIdx = 94;
	  section.data(20).dtTransOffset = 19;
	
	  ;% rtB.mq5r0xffei
	  section.data(21).logicalSrcIdx = 95;
	  section.data(21).dtTransOffset = 20;
	
	  ;% rtB.hbweu1k1mv
	  section.data(22).logicalSrcIdx = 96;
	  section.data(22).dtTransOffset = 21;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(8) = section;
      clear section
      
      section.nData     = 35;
      section.data(35)  = dumData; %prealloc
      
	  ;% rtB.dzolba3omv
	  section.data(1).logicalSrcIdx = 97;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.bceyt2gezt
	  section.data(2).logicalSrcIdx = 98;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtB.n5cj2elrim
	  section.data(3).logicalSrcIdx = 99;
	  section.data(3).dtTransOffset = 4;
	
	  ;% rtB.kjjdd01ek3
	  section.data(4).logicalSrcIdx = 100;
	  section.data(4).dtTransOffset = 5;
	
	  ;% rtB.gcx3vvlv01
	  section.data(5).logicalSrcIdx = 101;
	  section.data(5).dtTransOffset = 6;
	
	  ;% rtB.hffhj2j3tb
	  section.data(6).logicalSrcIdx = 102;
	  section.data(6).dtTransOffset = 7;
	
	  ;% rtB.hjj4qeyaab
	  section.data(7).logicalSrcIdx = 103;
	  section.data(7).dtTransOffset = 8;
	
	  ;% rtB.mdp1adv1zf
	  section.data(8).logicalSrcIdx = 104;
	  section.data(8).dtTransOffset = 9;
	
	  ;% rtB.nyoa5rvtc2
	  section.data(9).logicalSrcIdx = 105;
	  section.data(9).dtTransOffset = 10;
	
	  ;% rtB.mawtkveb0c
	  section.data(10).logicalSrcIdx = 106;
	  section.data(10).dtTransOffset = 11;
	
	  ;% rtB.l5kufayq12
	  section.data(11).logicalSrcIdx = 107;
	  section.data(11).dtTransOffset = 12;
	
	  ;% rtB.hespxibzur
	  section.data(12).logicalSrcIdx = 108;
	  section.data(12).dtTransOffset = 13;
	
	  ;% rtB.mmfoimpc5s
	  section.data(13).logicalSrcIdx = 109;
	  section.data(13).dtTransOffset = 14;
	
	  ;% rtB.hwoxkcxmnw
	  section.data(14).logicalSrcIdx = 110;
	  section.data(14).dtTransOffset = 15;
	
	  ;% rtB.ldkcvoyc05
	  section.data(15).logicalSrcIdx = 111;
	  section.data(15).dtTransOffset = 16;
	
	  ;% rtB.k2i5ljo21q
	  section.data(16).logicalSrcIdx = 112;
	  section.data(16).dtTransOffset = 17;
	
	  ;% rtB.br33n3ewpf
	  section.data(17).logicalSrcIdx = 113;
	  section.data(17).dtTransOffset = 18;
	
	  ;% rtB.acpkfkvmlz
	  section.data(18).logicalSrcIdx = 114;
	  section.data(18).dtTransOffset = 19;
	
	  ;% rtB.k2e4mtxz0f
	  section.data(19).logicalSrcIdx = 115;
	  section.data(19).dtTransOffset = 20;
	
	  ;% rtB.gzmx0g2ql4
	  section.data(20).logicalSrcIdx = 116;
	  section.data(20).dtTransOffset = 21;
	
	  ;% rtB.nvqsjvsh1e
	  section.data(21).logicalSrcIdx = 117;
	  section.data(21).dtTransOffset = 22;
	
	  ;% rtB.orlyixhwdt
	  section.data(22).logicalSrcIdx = 118;
	  section.data(22).dtTransOffset = 23;
	
	  ;% rtB.hweouvpzaf
	  section.data(23).logicalSrcIdx = 119;
	  section.data(23).dtTransOffset = 24;
	
	  ;% rtB.ajxn3billg
	  section.data(24).logicalSrcIdx = 120;
	  section.data(24).dtTransOffset = 25;
	
	  ;% rtB.a0rmql43dv
	  section.data(25).logicalSrcIdx = 121;
	  section.data(25).dtTransOffset = 26;
	
	  ;% rtB.h5gmicptzc
	  section.data(26).logicalSrcIdx = 122;
	  section.data(26).dtTransOffset = 27;
	
	  ;% rtB.ninnovw2gl
	  section.data(27).logicalSrcIdx = 123;
	  section.data(27).dtTransOffset = 28;
	
	  ;% rtB.iklzpkjqsn
	  section.data(28).logicalSrcIdx = 124;
	  section.data(28).dtTransOffset = 29;
	
	  ;% rtB.l45rxbwf2o
	  section.data(29).logicalSrcIdx = 125;
	  section.data(29).dtTransOffset = 30;
	
	  ;% rtB.gimf3q1muu
	  section.data(30).logicalSrcIdx = 126;
	  section.data(30).dtTransOffset = 31;
	
	  ;% rtB.e1opwguyzb
	  section.data(31).logicalSrcIdx = 127;
	  section.data(31).dtTransOffset = 32;
	
	  ;% rtB.pyovfatmru
	  section.data(32).logicalSrcIdx = 128;
	  section.data(32).dtTransOffset = 33;
	
	  ;% rtB.cjalrq1zug
	  section.data(33).logicalSrcIdx = 129;
	  section.data(33).dtTransOffset = 34;
	
	  ;% rtB.bsxi2ox2mt
	  section.data(34).logicalSrcIdx = 130;
	  section.data(34).dtTransOffset = 35;
	
	  ;% rtB.lil4t41v4y
	  section.data(35).logicalSrcIdx = 131;
	  section.data(35).dtTransOffset = 36;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(9) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtB.oqnpxh1nf0
	  section.data(1).logicalSrcIdx = 132;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.hliq0objjz
	  section.data(2).logicalSrcIdx = 133;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(10) = section;
      clear section
      
      section.nData     = 36;
      section.data(36)  = dumData; %prealloc
      
	  ;% rtB.cwy2gix3yr
	  section.data(1).logicalSrcIdx = 134;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.ahhsj5tl3f
	  section.data(2).logicalSrcIdx = 135;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtB.e3pd2awld2
	  section.data(3).logicalSrcIdx = 136;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtB.o5uklvuyrd
	  section.data(4).logicalSrcIdx = 137;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtB.ltoa54ba3c
	  section.data(5).logicalSrcIdx = 138;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtB.gpngzfzm5o
	  section.data(6).logicalSrcIdx = 139;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtB.iyg2osseov
	  section.data(7).logicalSrcIdx = 140;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtB.d3kur0pryu
	  section.data(8).logicalSrcIdx = 141;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtB.g5oqteomrh
	  section.data(9).logicalSrcIdx = 142;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtB.cotk5hq3pn
	  section.data(10).logicalSrcIdx = 143;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtB.irewvzta1j
	  section.data(11).logicalSrcIdx = 144;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtB.p5ltyme4ou
	  section.data(12).logicalSrcIdx = 145;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtB.gnegcolamm
	  section.data(13).logicalSrcIdx = 146;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtB.ci0kd5qanr
	  section.data(14).logicalSrcIdx = 147;
	  section.data(14).dtTransOffset = 13;
	
	  ;% rtB.cmlf145r3w
	  section.data(15).logicalSrcIdx = 148;
	  section.data(15).dtTransOffset = 14;
	
	  ;% rtB.phdru50zsj
	  section.data(16).logicalSrcIdx = 149;
	  section.data(16).dtTransOffset = 15;
	
	  ;% rtB.iyafkvctqt
	  section.data(17).logicalSrcIdx = 150;
	  section.data(17).dtTransOffset = 16;
	
	  ;% rtB.ntkpejjap3
	  section.data(18).logicalSrcIdx = 151;
	  section.data(18).dtTransOffset = 17;
	
	  ;% rtB.deg3k52snr
	  section.data(19).logicalSrcIdx = 152;
	  section.data(19).dtTransOffset = 18;
	
	  ;% rtB.lpicjg4fyq
	  section.data(20).logicalSrcIdx = 153;
	  section.data(20).dtTransOffset = 19;
	
	  ;% rtB.fxnfbtjkqf
	  section.data(21).logicalSrcIdx = 154;
	  section.data(21).dtTransOffset = 20;
	
	  ;% rtB.of3umjp2za
	  section.data(22).logicalSrcIdx = 155;
	  section.data(22).dtTransOffset = 21;
	
	  ;% rtB.pmcmjq0wty
	  section.data(23).logicalSrcIdx = 156;
	  section.data(23).dtTransOffset = 22;
	
	  ;% rtB.fpfftzsohz
	  section.data(24).logicalSrcIdx = 157;
	  section.data(24).dtTransOffset = 23;
	
	  ;% rtB.g5u5xbo0h3
	  section.data(25).logicalSrcIdx = 158;
	  section.data(25).dtTransOffset = 24;
	
	  ;% rtB.naosxvvjkq
	  section.data(26).logicalSrcIdx = 159;
	  section.data(26).dtTransOffset = 25;
	
	  ;% rtB.mbob4csy5h
	  section.data(27).logicalSrcIdx = 160;
	  section.data(27).dtTransOffset = 26;
	
	  ;% rtB.bnss3gxib0
	  section.data(28).logicalSrcIdx = 161;
	  section.data(28).dtTransOffset = 27;
	
	  ;% rtB.kxwhxhizh0
	  section.data(29).logicalSrcIdx = 162;
	  section.data(29).dtTransOffset = 28;
	
	  ;% rtB.db3qfnh4gl
	  section.data(30).logicalSrcIdx = 163;
	  section.data(30).dtTransOffset = 29;
	
	  ;% rtB.gcxcrfqzbn
	  section.data(31).logicalSrcIdx = 164;
	  section.data(31).dtTransOffset = 30;
	
	  ;% rtB.dfuxydpjaq
	  section.data(32).logicalSrcIdx = 165;
	  section.data(32).dtTransOffset = 31;
	
	  ;% rtB.pjkv5aehah
	  section.data(33).logicalSrcIdx = 166;
	  section.data(33).dtTransOffset = 32;
	
	  ;% rtB.gsl3xqnnpl
	  section.data(34).logicalSrcIdx = 167;
	  section.data(34).dtTransOffset = 33;
	
	  ;% rtB.bk1jemzwgb
	  section.data(35).logicalSrcIdx = 168;
	  section.data(35).dtTransOffset = 34;
	
	  ;% rtB.f0zeyhioe2
	  section.data(36).logicalSrcIdx = 169;
	  section.data(36).dtTransOffset = 35;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(11) = section;
      clear section
      
      section.nData     = 5;
      section.data(5)  = dumData; %prealloc
      
	  ;% rtB.ezsbqyvnan
	  section.data(1).logicalSrcIdx = 170;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.h2gdavdf12
	  section.data(2).logicalSrcIdx = 171;
	  section.data(2).dtTransOffset = 3;
	
	  ;% rtB.agxl0jnck4
	  section.data(3).logicalSrcIdx = 172;
	  section.data(3).dtTransOffset = 7;
	
	  ;% rtB.bmycztu53b
	  section.data(4).logicalSrcIdx = 173;
	  section.data(4).dtTransOffset = 8;
	
	  ;% rtB.jct14c5au5
	  section.data(5).logicalSrcIdx = 174;
	  section.data(5).dtTransOffset = 9;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(12) = section;
      clear section
      
      section.nData     = 72;
      section.data(72)  = dumData; %prealloc
      
	  ;% rtB.bxwcxvlcty
	  section.data(1).logicalSrcIdx = 175;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.e4uxf3jebt
	  section.data(2).logicalSrcIdx = 176;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtB.ays0cxwjgc
	  section.data(3).logicalSrcIdx = 177;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtB.aocicufjnb
	  section.data(4).logicalSrcIdx = 178;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtB.be0433drgy
	  section.data(5).logicalSrcIdx = 179;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtB.nvp5saf4vt
	  section.data(6).logicalSrcIdx = 180;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtB.a42sd0byju
	  section.data(7).logicalSrcIdx = 181;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtB.cnf1xgsxjm
	  section.data(8).logicalSrcIdx = 182;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtB.iddapcucwk
	  section.data(9).logicalSrcIdx = 183;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtB.ih3p5u1r2h
	  section.data(10).logicalSrcIdx = 184;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtB.pb4ejhsyzn
	  section.data(11).logicalSrcIdx = 185;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtB.pr5qzbgply
	  section.data(12).logicalSrcIdx = 186;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtB.dbaeye23k3
	  section.data(13).logicalSrcIdx = 187;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtB.p1zaumnujz
	  section.data(14).logicalSrcIdx = 188;
	  section.data(14).dtTransOffset = 13;
	
	  ;% rtB.ckkbsg4b5s
	  section.data(15).logicalSrcIdx = 189;
	  section.data(15).dtTransOffset = 14;
	
	  ;% rtB.eq3toms2v4
	  section.data(16).logicalSrcIdx = 190;
	  section.data(16).dtTransOffset = 15;
	
	  ;% rtB.megyurvikr
	  section.data(17).logicalSrcIdx = 191;
	  section.data(17).dtTransOffset = 16;
	
	  ;% rtB.nvwgj11js1
	  section.data(18).logicalSrcIdx = 192;
	  section.data(18).dtTransOffset = 17;
	
	  ;% rtB.m31yfjfxst
	  section.data(19).logicalSrcIdx = 193;
	  section.data(19).dtTransOffset = 18;
	
	  ;% rtB.jzseladqz5
	  section.data(20).logicalSrcIdx = 194;
	  section.data(20).dtTransOffset = 19;
	
	  ;% rtB.cj5quyrcyv
	  section.data(21).logicalSrcIdx = 195;
	  section.data(21).dtTransOffset = 20;
	
	  ;% rtB.nal2meeth1
	  section.data(22).logicalSrcIdx = 196;
	  section.data(22).dtTransOffset = 21;
	
	  ;% rtB.bhcd2cpqy3
	  section.data(23).logicalSrcIdx = 197;
	  section.data(23).dtTransOffset = 22;
	
	  ;% rtB.cdo1t005p0
	  section.data(24).logicalSrcIdx = 198;
	  section.data(24).dtTransOffset = 23;
	
	  ;% rtB.okhmnm0uka
	  section.data(25).logicalSrcIdx = 199;
	  section.data(25).dtTransOffset = 24;
	
	  ;% rtB.fwqhnxdxba
	  section.data(26).logicalSrcIdx = 200;
	  section.data(26).dtTransOffset = 25;
	
	  ;% rtB.othlvy4lcm
	  section.data(27).logicalSrcIdx = 201;
	  section.data(27).dtTransOffset = 26;
	
	  ;% rtB.cf2yz3yij0
	  section.data(28).logicalSrcIdx = 202;
	  section.data(28).dtTransOffset = 27;
	
	  ;% rtB.haeikw2v0u
	  section.data(29).logicalSrcIdx = 203;
	  section.data(29).dtTransOffset = 28;
	
	  ;% rtB.h4gt1s2quy
	  section.data(30).logicalSrcIdx = 204;
	  section.data(30).dtTransOffset = 29;
	
	  ;% rtB.azomz2512x
	  section.data(31).logicalSrcIdx = 205;
	  section.data(31).dtTransOffset = 30;
	
	  ;% rtB.jz5sra12na
	  section.data(32).logicalSrcIdx = 206;
	  section.data(32).dtTransOffset = 31;
	
	  ;% rtB.j4zso4cshe
	  section.data(33).logicalSrcIdx = 207;
	  section.data(33).dtTransOffset = 32;
	
	  ;% rtB.p1qhdkmp1e
	  section.data(34).logicalSrcIdx = 208;
	  section.data(34).dtTransOffset = 33;
	
	  ;% rtB.noriyy1yxf
	  section.data(35).logicalSrcIdx = 209;
	  section.data(35).dtTransOffset = 34;
	
	  ;% rtB.g5wlvxxevf
	  section.data(36).logicalSrcIdx = 210;
	  section.data(36).dtTransOffset = 35;
	
	  ;% rtB.i4usrn1mnq
	  section.data(37).logicalSrcIdx = 211;
	  section.data(37).dtTransOffset = 36;
	
	  ;% rtB.oa3yjyv5sa
	  section.data(38).logicalSrcIdx = 212;
	  section.data(38).dtTransOffset = 37;
	
	  ;% rtB.jwsp2nls1p
	  section.data(39).logicalSrcIdx = 213;
	  section.data(39).dtTransOffset = 38;
	
	  ;% rtB.ogwvvk0sds
	  section.data(40).logicalSrcIdx = 214;
	  section.data(40).dtTransOffset = 39;
	
	  ;% rtB.i2rtlw2sff
	  section.data(41).logicalSrcIdx = 215;
	  section.data(41).dtTransOffset = 40;
	
	  ;% rtB.h5p1p3zh3a
	  section.data(42).logicalSrcIdx = 216;
	  section.data(42).dtTransOffset = 41;
	
	  ;% rtB.ezmjk2o1s1
	  section.data(43).logicalSrcIdx = 217;
	  section.data(43).dtTransOffset = 42;
	
	  ;% rtB.lljj4opukd
	  section.data(44).logicalSrcIdx = 218;
	  section.data(44).dtTransOffset = 43;
	
	  ;% rtB.byriipp1p3
	  section.data(45).logicalSrcIdx = 219;
	  section.data(45).dtTransOffset = 44;
	
	  ;% rtB.gfkap4zouj
	  section.data(46).logicalSrcIdx = 220;
	  section.data(46).dtTransOffset = 45;
	
	  ;% rtB.aud13svlct
	  section.data(47).logicalSrcIdx = 221;
	  section.data(47).dtTransOffset = 46;
	
	  ;% rtB.mypgjf3jml
	  section.data(48).logicalSrcIdx = 222;
	  section.data(48).dtTransOffset = 47;
	
	  ;% rtB.ly4h0bwdnm
	  section.data(49).logicalSrcIdx = 223;
	  section.data(49).dtTransOffset = 48;
	
	  ;% rtB.n23gjpdnyb
	  section.data(50).logicalSrcIdx = 224;
	  section.data(50).dtTransOffset = 49;
	
	  ;% rtB.magvavcslg
	  section.data(51).logicalSrcIdx = 225;
	  section.data(51).dtTransOffset = 50;
	
	  ;% rtB.jntqx3sul1
	  section.data(52).logicalSrcIdx = 226;
	  section.data(52).dtTransOffset = 51;
	
	  ;% rtB.klpuetkq5g
	  section.data(53).logicalSrcIdx = 227;
	  section.data(53).dtTransOffset = 52;
	
	  ;% rtB.irohinrqyf
	  section.data(54).logicalSrcIdx = 228;
	  section.data(54).dtTransOffset = 53;
	
	  ;% rtB.oiwmfmahct
	  section.data(55).logicalSrcIdx = 229;
	  section.data(55).dtTransOffset = 54;
	
	  ;% rtB.gbblvn3zyv
	  section.data(56).logicalSrcIdx = 230;
	  section.data(56).dtTransOffset = 55;
	
	  ;% rtB.k1ggl1xgfz
	  section.data(57).logicalSrcIdx = 231;
	  section.data(57).dtTransOffset = 56;
	
	  ;% rtB.lb2k1x1ogu
	  section.data(58).logicalSrcIdx = 232;
	  section.data(58).dtTransOffset = 57;
	
	  ;% rtB.ocrom13v4d
	  section.data(59).logicalSrcIdx = 233;
	  section.data(59).dtTransOffset = 58;
	
	  ;% rtB.cxxjjwrqch
	  section.data(60).logicalSrcIdx = 234;
	  section.data(60).dtTransOffset = 59;
	
	  ;% rtB.mvtbzy4kxz
	  section.data(61).logicalSrcIdx = 235;
	  section.data(61).dtTransOffset = 60;
	
	  ;% rtB.edhhzwakxu
	  section.data(62).logicalSrcIdx = 236;
	  section.data(62).dtTransOffset = 61;
	
	  ;% rtB.ap04dfb20d
	  section.data(63).logicalSrcIdx = 237;
	  section.data(63).dtTransOffset = 62;
	
	  ;% rtB.dzkfl5rhnk
	  section.data(64).logicalSrcIdx = 238;
	  section.data(64).dtTransOffset = 63;
	
	  ;% rtB.cczpwym0xn
	  section.data(65).logicalSrcIdx = 239;
	  section.data(65).dtTransOffset = 64;
	
	  ;% rtB.mxy1hkdva5
	  section.data(66).logicalSrcIdx = 240;
	  section.data(66).dtTransOffset = 65;
	
	  ;% rtB.mcdt4kjdw0
	  section.data(67).logicalSrcIdx = 241;
	  section.data(67).dtTransOffset = 66;
	
	  ;% rtB.bek0af0j1j
	  section.data(68).logicalSrcIdx = 242;
	  section.data(68).dtTransOffset = 67;
	
	  ;% rtB.kp4so2pt2n
	  section.data(69).logicalSrcIdx = 243;
	  section.data(69).dtTransOffset = 68;
	
	  ;% rtB.kf1wm1zuum
	  section.data(70).logicalSrcIdx = 244;
	  section.data(70).dtTransOffset = 69;
	
	  ;% rtB.edeyixszm5
	  section.data(71).logicalSrcIdx = 245;
	  section.data(71).dtTransOffset = 70;
	
	  ;% rtB.gpz2elpgqi
	  section.data(72).logicalSrcIdx = 246;
	  section.data(72).dtTransOffset = 71;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(13) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.kpjzhjqrqw.owi3gr0gl5
	  section.data(1).logicalSrcIdx = 247;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(14) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.popnzdb3ry.djc2e4rqrh
	  section.data(1).logicalSrcIdx = 248;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(15) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.crejvlo0y5.emcuycy0pw
	  section.data(1).logicalSrcIdx = 249;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(16) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.kb0c50ld2h.cxqjp3z5g0
	  section.data(1).logicalSrcIdx = 250;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(17) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.l4kbtxpaxe.pp2wmkmgqd
	  section.data(1).logicalSrcIdx = 251;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(18) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.kwch3e15c1.emcuycy0pw
	  section.data(1).logicalSrcIdx = 252;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(19) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.ep4zp2asi5.owi3gr0gl5
	  section.data(1).logicalSrcIdx = 253;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(20) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.ifacholhbj.djc2e4rqrh
	  section.data(1).logicalSrcIdx = 254;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(21) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.kcj1xw2fyj.emcuycy0pw
	  section.data(1).logicalSrcIdx = 255;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(22) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.gis5nx3d51.cxqjp3z5g0
	  section.data(1).logicalSrcIdx = 256;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(23) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.jesurwi24z.pp2wmkmgqd
	  section.data(1).logicalSrcIdx = 257;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(24) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.gqsds1azit.emcuycy0pw
	  section.data(1).logicalSrcIdx = 258;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(25) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.eygzwxr3yp.owi3gr0gl5
	  section.data(1).logicalSrcIdx = 259;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(26) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.ppbi33hazt.djc2e4rqrh
	  section.data(1).logicalSrcIdx = 260;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(27) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.hsz3hkboep.emcuycy0pw
	  section.data(1).logicalSrcIdx = 261;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(28) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.hvquu0midq.cxqjp3z5g0
	  section.data(1).logicalSrcIdx = 262;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(29) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.fhzqhbrdcr.pp2wmkmgqd
	  section.data(1).logicalSrcIdx = 263;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(30) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.etzyrbzjj0.emcuycy0pw
	  section.data(1).logicalSrcIdx = 264;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(31) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.aqmj5gejllk.owi3gr0gl5
	  section.data(1).logicalSrcIdx = 265;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(32) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.nirnnu0kb5e.djc2e4rqrh
	  section.data(1).logicalSrcIdx = 266;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(33) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.hamu3nooom.emcuycy0pw
	  section.data(1).logicalSrcIdx = 267;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(34) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.jgkqqwc2m5a.cxqjp3z5g0
	  section.data(1).logicalSrcIdx = 268;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(35) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.n014eikjcjy.pp2wmkmgqd
	  section.data(1).logicalSrcIdx = 269;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(36) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.otw02eo3ue3.emcuycy0pw
	  section.data(1).logicalSrcIdx = 270;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(37) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.lyyly4yad2e2d.pmfcpbeq12
	  section.data(1).logicalSrcIdx = 271;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(38) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtB.lyyly4yad2e2d.prus50oyah
	  section.data(1).logicalSrcIdx = 272;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.lyyly4yad2e2d.fv5wzqs0g4
	  section.data(2).logicalSrcIdx = 273;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(39) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtB.jrnktqme1n3b1.bmorkd0dzv
	  section.data(1).logicalSrcIdx = 274;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.jrnktqme1n3b1.jla3h5bfbz
	  section.data(2).logicalSrcIdx = 275;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(40) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.jrnktqme1n3b1.fmynalp5d2
	  section.data(1).logicalSrcIdx = 276;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(41) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.lyyly4yad2e2.pmfcpbeq12
	  section.data(1).logicalSrcIdx = 277;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(42) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtB.lyyly4yad2e2.prus50oyah
	  section.data(1).logicalSrcIdx = 278;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.lyyly4yad2e2.fv5wzqs0g4
	  section.data(2).logicalSrcIdx = 279;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(43) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtB.jrnktqme1n3b.bmorkd0dzv
	  section.data(1).logicalSrcIdx = 280;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.jrnktqme1n3b.jla3h5bfbz
	  section.data(2).logicalSrcIdx = 281;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(44) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.jrnktqme1n3b.fmynalp5d2
	  section.data(1).logicalSrcIdx = 282;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(45) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (signal)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    sigMap.nTotData = nTotData;
    


  ;%*******************
  ;% Create DWork Map *
  ;%*******************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 51;
    sectIdxOffset = 45;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc dworkMap
    ;%
    dworkMap.nSections           = nTotSects;
    dworkMap.sectIdxOffset       = sectIdxOffset;
      dworkMap.sections(nTotSects) = dumSection; %prealloc
    dworkMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtDW)
    ;%
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtDW.ermnepihcn
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.nbiqr5wspw
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtDW.grqziysskz
	  section.data(1).logicalSrcIdx = 2;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.azbznqzcih
	  section.data(2).logicalSrcIdx = 3;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.cnh0t2u2st
	  section.data(1).logicalSrcIdx = 4;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.dlyyimby3l
	  section.data(1).logicalSrcIdx = 5;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 5;
      section.data(5)  = dumData; %prealloc
      
	  ;% rtDW.kom2on3tza
	  section.data(1).logicalSrcIdx = 6;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.oo11jil2fj
	  section.data(2).logicalSrcIdx = 7;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.a32edo1wit
	  section.data(3).logicalSrcIdx = 8;
	  section.data(3).dtTransOffset = 36;
	
	  ;% rtDW.nxiegp2np2
	  section.data(4).logicalSrcIdx = 9;
	  section.data(4).dtTransOffset = 71;
	
	  ;% rtDW.anify3zav4
	  section.data(5).logicalSrcIdx = 10;
	  section.data(5).dtTransOffset = 106;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(5) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.eeg2qrogh5
	  section.data(1).logicalSrcIdx = 11;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(6) = section;
      clear section
      
      section.nData     = 40;
      section.data(40)  = dumData; %prealloc
      
	  ;% rtDW.je3fxbkxni.LoggedData
	  section.data(1).logicalSrcIdx = 12;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.hmzu0f5hps.LoggedData
	  section.data(2).logicalSrcIdx = 13;
	  section.data(2).dtTransOffset = 4;
	
	  ;% rtDW.kkydb1gjmz.TimePtr
	  section.data(3).logicalSrcIdx = 14;
	  section.data(3).dtTransOffset = 6;
	
	  ;% rtDW.nl1bpgswzl.TimePtr
	  section.data(4).logicalSrcIdx = 15;
	  section.data(4).dtTransOffset = 7;
	
	  ;% rtDW.blfyjbjksw.TimePtr
	  section.data(5).logicalSrcIdx = 16;
	  section.data(5).dtTransOffset = 8;
	
	  ;% rtDW.o3pnclbg5l.TimePtr
	  section.data(6).logicalSrcIdx = 17;
	  section.data(6).dtTransOffset = 9;
	
	  ;% rtDW.cik5yfvopb.TimePtr
	  section.data(7).logicalSrcIdx = 18;
	  section.data(7).dtTransOffset = 10;
	
	  ;% rtDW.i44vfztycq.TimePtr
	  section.data(8).logicalSrcIdx = 19;
	  section.data(8).dtTransOffset = 11;
	
	  ;% rtDW.j2pd5q2ore.TimePtr
	  section.data(9).logicalSrcIdx = 20;
	  section.data(9).dtTransOffset = 12;
	
	  ;% rtDW.iqoyvk1xwu.TimePtr
	  section.data(10).logicalSrcIdx = 21;
	  section.data(10).dtTransOffset = 13;
	
	  ;% rtDW.ahplabeisu.LoggedData
	  section.data(11).logicalSrcIdx = 22;
	  section.data(11).dtTransOffset = 14;
	
	  ;% rtDW.cwh4upwmny.LoggedData
	  section.data(12).logicalSrcIdx = 23;
	  section.data(12).dtTransOffset = 18;
	
	  ;% rtDW.eel0phm2gv.LoggedData
	  section.data(13).logicalSrcIdx = 24;
	  section.data(13).dtTransOffset = 23;
	
	  ;% rtDW.lt3b4hgr3x.LoggedData
	  section.data(14).logicalSrcIdx = 25;
	  section.data(14).dtTransOffset = 27;
	
	  ;% rtDW.g5bfwnxwuq.LoggedData
	  section.data(15).logicalSrcIdx = 26;
	  section.data(15).dtTransOffset = 29;
	
	  ;% rtDW.d2vy4yaoku.AQHandles
	  section.data(16).logicalSrcIdx = 27;
	  section.data(16).dtTransOffset = 30;
	
	  ;% rtDW.hhgqqvjy4v.AQHandles
	  section.data(17).logicalSrcIdx = 28;
	  section.data(17).dtTransOffset = 31;
	
	  ;% rtDW.kyxq1kl0ma.AQHandles
	  section.data(18).logicalSrcIdx = 29;
	  section.data(18).dtTransOffset = 32;
	
	  ;% rtDW.o4pxgjuli2.AQHandles
	  section.data(19).logicalSrcIdx = 30;
	  section.data(19).dtTransOffset = 33;
	
	  ;% rtDW.cuqwodigqn.TimePtr
	  section.data(20).logicalSrcIdx = 31;
	  section.data(20).dtTransOffset = 34;
	
	  ;% rtDW.bjknxe2m0b.LoggedData
	  section.data(21).logicalSrcIdx = 32;
	  section.data(21).dtTransOffset = 35;
	
	  ;% rtDW.k4m00vo01b.LoggedData
	  section.data(22).logicalSrcIdx = 33;
	  section.data(22).dtTransOffset = 39;
	
	  ;% rtDW.bf3wn5wlqp.LoggedData
	  section.data(23).logicalSrcIdx = 34;
	  section.data(23).dtTransOffset = 40;
	
	  ;% rtDW.d3pxwtnl02.LoggedData
	  section.data(24).logicalSrcIdx = 35;
	  section.data(24).dtTransOffset = 44;
	
	  ;% rtDW.ewk1clyhvj.LoggedData
	  section.data(25).logicalSrcIdx = 36;
	  section.data(25).dtTransOffset = 47;
	
	  ;% rtDW.m1inawdncf.LoggedData
	  section.data(26).logicalSrcIdx = 37;
	  section.data(26).dtTransOffset = 49;
	
	  ;% rtDW.axx2a00mns.LoggedData
	  section.data(27).logicalSrcIdx = 38;
	  section.data(27).dtTransOffset = 53;
	
	  ;% rtDW.f5xcmn0kpn.LoggedData
	  section.data(28).logicalSrcIdx = 39;
	  section.data(28).dtTransOffset = 56;
	
	  ;% rtDW.njpxwb1ftt.LoggedData
	  section.data(29).logicalSrcIdx = 40;
	  section.data(29).dtTransOffset = 60;
	
	  ;% rtDW.eiaxw0di2g.LoggedData
	  section.data(30).logicalSrcIdx = 41;
	  section.data(30).dtTransOffset = 63;
	
	  ;% rtDW.aevse1bavv.LoggedData
	  section.data(31).logicalSrcIdx = 42;
	  section.data(31).dtTransOffset = 67;
	
	  ;% rtDW.oqnbr34055.LoggedData
	  section.data(32).logicalSrcIdx = 43;
	  section.data(32).dtTransOffset = 70;
	
	  ;% rtDW.n4tl4blt0q.LoggedData
	  section.data(33).logicalSrcIdx = 44;
	  section.data(33).dtTransOffset = 74;
	
	  ;% rtDW.ofayl4ymyf.LoggedData
	  section.data(34).logicalSrcIdx = 45;
	  section.data(34).dtTransOffset = 76;
	
	  ;% rtDW.pnjtc0lbc2.LoggedData
	  section.data(35).logicalSrcIdx = 46;
	  section.data(35).dtTransOffset = 77;
	
	  ;% rtDW.kvqczvgxdg.LoggedData
	  section.data(36).logicalSrcIdx = 47;
	  section.data(36).dtTransOffset = 78;
	
	  ;% rtDW.lv0rhanr0b.LoggedData
	  section.data(37).logicalSrcIdx = 48;
	  section.data(37).dtTransOffset = 82;
	
	  ;% rtDW.co4ptnj5ad.LoggedData
	  section.data(38).logicalSrcIdx = 49;
	  section.data(38).dtTransOffset = 90;
	
	  ;% rtDW.aaaj0gvmrb.LoggedData
	  section.data(39).logicalSrcIdx = 50;
	  section.data(39).dtTransOffset = 98;
	
	  ;% rtDW.b5cksqmh1c.LoggedData
	  section.data(40).logicalSrcIdx = 51;
	  section.data(40).dtTransOffset = 102;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(7) = section;
      clear section
      
      section.nData     = 17;
      section.data(17)  = dumData; %prealloc
      
	  ;% rtDW.jsgyz1qcth
	  section.data(1).logicalSrcIdx = 52;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.nnreceeeob
	  section.data(2).logicalSrcIdx = 53;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.l0wgyztcbo
	  section.data(3).logicalSrcIdx = 54;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.gwrnkftzef
	  section.data(4).logicalSrcIdx = 55;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.b52mktt2zz
	  section.data(5).logicalSrcIdx = 56;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.ngjwiyysws
	  section.data(6).logicalSrcIdx = 57;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.dwn4wwhy2y
	  section.data(7).logicalSrcIdx = 58;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.jx4h2wbup3
	  section.data(8).logicalSrcIdx = 59;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtDW.bio2vh5c4c
	  section.data(9).logicalSrcIdx = 60;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtDW.mmzjnp1uww
	  section.data(10).logicalSrcIdx = 61;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtDW.em01ku2qsr
	  section.data(11).logicalSrcIdx = 62;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtDW.el0lvpuekz
	  section.data(12).logicalSrcIdx = 63;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtDW.hnvrararos
	  section.data(13).logicalSrcIdx = 64;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtDW.plhu0vyzl3
	  section.data(14).logicalSrcIdx = 65;
	  section.data(14).dtTransOffset = 13;
	
	  ;% rtDW.gk2im0n30c
	  section.data(15).logicalSrcIdx = 66;
	  section.data(15).dtTransOffset = 15;
	
	  ;% rtDW.cv4jadh1hz
	  section.data(16).logicalSrcIdx = 67;
	  section.data(16).dtTransOffset = 17;
	
	  ;% rtDW.pva255ly42
	  section.data(17).logicalSrcIdx = 68;
	  section.data(17).dtTransOffset = 19;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(8) = section;
      clear section
      
      section.nData     = 8;
      section.data(8)  = dumData; %prealloc
      
	  ;% rtDW.dl24d3xbii
	  section.data(1).logicalSrcIdx = 69;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.oorrier0f2
	  section.data(2).logicalSrcIdx = 70;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.oyp1nx1y0d
	  section.data(3).logicalSrcIdx = 71;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.lmcosoxm0k
	  section.data(4).logicalSrcIdx = 72;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.kohozqm44k
	  section.data(5).logicalSrcIdx = 73;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.kdsiyo0fhb
	  section.data(6).logicalSrcIdx = 74;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.a2zb4ls2ku
	  section.data(7).logicalSrcIdx = 75;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.dsoc41t3j0
	  section.data(8).logicalSrcIdx = 76;
	  section.data(8).dtTransOffset = 7;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(9) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% rtDW.jnmbtix4it
	  section.data(1).logicalSrcIdx = 77;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.bfzub4gldc
	  section.data(2).logicalSrcIdx = 78;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.dkepphtq0p
	  section.data(3).logicalSrcIdx = 79;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.e1m3m031zp
	  section.data(4).logicalSrcIdx = 80;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(10) = section;
      clear section
      
      section.nData     = 14;
      section.data(14)  = dumData; %prealloc
      
	  ;% rtDW.nft1hjwjii
	  section.data(1).logicalSrcIdx = 81;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.dr4qhxhwfg
	  section.data(2).logicalSrcIdx = 82;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.fygen3nvd5
	  section.data(3).logicalSrcIdx = 83;
	  section.data(3).dtTransOffset = 3;
	
	  ;% rtDW.ijvf4opeah
	  section.data(4).logicalSrcIdx = 84;
	  section.data(4).dtTransOffset = 4;
	
	  ;% rtDW.os4r2mn3bs
	  section.data(5).logicalSrcIdx = 85;
	  section.data(5).dtTransOffset = 5;
	
	  ;% rtDW.fvkxtqdmvc
	  section.data(6).logicalSrcIdx = 86;
	  section.data(6).dtTransOffset = 7;
	
	  ;% rtDW.kkfiu0cmbj
	  section.data(7).logicalSrcIdx = 87;
	  section.data(7).dtTransOffset = 8;
	
	  ;% rtDW.hjbuyzppp0
	  section.data(8).logicalSrcIdx = 88;
	  section.data(8).dtTransOffset = 9;
	
	  ;% rtDW.mnzg33f1u3
	  section.data(9).logicalSrcIdx = 89;
	  section.data(9).dtTransOffset = 11;
	
	  ;% rtDW.dlrpd20j4u
	  section.data(10).logicalSrcIdx = 90;
	  section.data(10).dtTransOffset = 12;
	
	  ;% rtDW.gfyphbttiz
	  section.data(11).logicalSrcIdx = 91;
	  section.data(11).dtTransOffset = 13;
	
	  ;% rtDW.nhov5hvn4g
	  section.data(12).logicalSrcIdx = 92;
	  section.data(12).dtTransOffset = 15;
	
	  ;% rtDW.gqoxt5atim
	  section.data(13).logicalSrcIdx = 93;
	  section.data(13).dtTransOffset = 16;
	
	  ;% rtDW.n1p2345kna
	  section.data(14).logicalSrcIdx = 94;
	  section.data(14).dtTransOffset = 17;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(11) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.dc1fsvlzrf
	  section.data(1).logicalSrcIdx = 95;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(12) = section;
      clear section
      
      section.nData     = 9;
      section.data(9)  = dumData; %prealloc
      
	  ;% rtDW.nbltkbxya0.PrevIndex
	  section.data(1).logicalSrcIdx = 96;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.iawnirxblf.PrevIndex
	  section.data(2).logicalSrcIdx = 97;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.g3l243y1u3.PrevIndex
	  section.data(3).logicalSrcIdx = 98;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.eycujnig4l.PrevIndex
	  section.data(4).logicalSrcIdx = 99;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.h2ju2tf3mj.PrevIndex
	  section.data(5).logicalSrcIdx = 100;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.flbfwgerrm.PrevIndex
	  section.data(6).logicalSrcIdx = 101;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.giitlnmjsq.PrevIndex
	  section.data(7).logicalSrcIdx = 102;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.ef0vh4kl2l.PrevIndex
	  section.data(8).logicalSrcIdx = 103;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtDW.gvlgkjwrhe.PrevIndex
	  section.data(9).logicalSrcIdx = 104;
	  section.data(9).dtTransOffset = 8;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(13) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% rtDW.nnty3e15zo
	  section.data(1).logicalSrcIdx = 105;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.arkwssm1yy
	  section.data(2).logicalSrcIdx = 106;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.mff3u0pd5g
	  section.data(3).logicalSrcIdx = 107;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.cs2ea0cbeg
	  section.data(4).logicalSrcIdx = 108;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(14) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtDW.o4zet3azl0
	  section.data(1).logicalSrcIdx = 109;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.lfwrlfba1u
	  section.data(2).logicalSrcIdx = 110;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(15) = section;
      clear section
      
      section.nData     = 9;
      section.data(9)  = dumData; %prealloc
      
	  ;% rtDW.gnviqudpd4
	  section.data(1).logicalSrcIdx = 111;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.feq2k5hyrq
	  section.data(2).logicalSrcIdx = 112;
	  section.data(2).dtTransOffset = 2;
	
	  ;% rtDW.nqcyti2ov4
	  section.data(3).logicalSrcIdx = 113;
	  section.data(3).dtTransOffset = 3;
	
	  ;% rtDW.ceeuccxr3s
	  section.data(4).logicalSrcIdx = 114;
	  section.data(4).dtTransOffset = 4;
	
	  ;% rtDW.lv3ck33lyh
	  section.data(5).logicalSrcIdx = 115;
	  section.data(5).dtTransOffset = 5;
	
	  ;% rtDW.mvicvyd4ab
	  section.data(6).logicalSrcIdx = 116;
	  section.data(6).dtTransOffset = 6;
	
	  ;% rtDW.hxfv4spray
	  section.data(7).logicalSrcIdx = 117;
	  section.data(7).dtTransOffset = 7;
	
	  ;% rtDW.ncvdu1kcxh
	  section.data(8).logicalSrcIdx = 118;
	  section.data(8).dtTransOffset = 8;
	
	  ;% rtDW.dq53bdyvmu
	  section.data(9).logicalSrcIdx = 119;
	  section.data(9).dtTransOffset = 9;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(16) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% rtDW.jhxoqbpjsq
	  section.data(1).logicalSrcIdx = 120;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.n3px15f5qg
	  section.data(2).logicalSrcIdx = 121;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.at5rpeawoo
	  section.data(3).logicalSrcIdx = 122;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(17) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% rtDW.adtpgbwbkv
	  section.data(1).logicalSrcIdx = 123;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.pt4yh5gdha
	  section.data(2).logicalSrcIdx = 124;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.nnxhgghgr4
	  section.data(3).logicalSrcIdx = 125;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.pxcwuzk4ix
	  section.data(4).logicalSrcIdx = 126;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(18) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% rtDW.nktiitfvs5
	  section.data(1).logicalSrcIdx = 127;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.nw4ierg2mf
	  section.data(2).logicalSrcIdx = 128;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.gvqew00wty
	  section.data(3).logicalSrcIdx = 129;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.ccefl3hqw4
	  section.data(4).logicalSrcIdx = 130;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(19) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.kpjzhjqrqw.loskfbob5b
	  section.data(1).logicalSrcIdx = 131;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(20) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.popnzdb3ry.pobr4kqks2
	  section.data(1).logicalSrcIdx = 132;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(21) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.crejvlo0y5.gyucjoxwjz
	  section.data(1).logicalSrcIdx = 133;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(22) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.kb0c50ld2h.arvghscytc
	  section.data(1).logicalSrcIdx = 134;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(23) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.l4kbtxpaxe.c1gzfpfi1s
	  section.data(1).logicalSrcIdx = 135;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(24) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.kwch3e15c1.gyucjoxwjz
	  section.data(1).logicalSrcIdx = 136;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(25) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.ep4zp2asi5.loskfbob5b
	  section.data(1).logicalSrcIdx = 137;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(26) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.ifacholhbj.pobr4kqks2
	  section.data(1).logicalSrcIdx = 138;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(27) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.kcj1xw2fyj.gyucjoxwjz
	  section.data(1).logicalSrcIdx = 139;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(28) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.gis5nx3d51.arvghscytc
	  section.data(1).logicalSrcIdx = 140;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(29) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.jesurwi24z.c1gzfpfi1s
	  section.data(1).logicalSrcIdx = 141;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(30) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.gqsds1azit.gyucjoxwjz
	  section.data(1).logicalSrcIdx = 142;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(31) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.eygzwxr3yp.loskfbob5b
	  section.data(1).logicalSrcIdx = 143;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(32) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.ppbi33hazt.pobr4kqks2
	  section.data(1).logicalSrcIdx = 144;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(33) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.hsz3hkboep.gyucjoxwjz
	  section.data(1).logicalSrcIdx = 145;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(34) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.hvquu0midq.arvghscytc
	  section.data(1).logicalSrcIdx = 146;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(35) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.fhzqhbrdcr.c1gzfpfi1s
	  section.data(1).logicalSrcIdx = 147;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(36) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.etzyrbzjj0.gyucjoxwjz
	  section.data(1).logicalSrcIdx = 148;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(37) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.aqmj5gejllk.loskfbob5b
	  section.data(1).logicalSrcIdx = 149;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(38) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.nirnnu0kb5e.pobr4kqks2
	  section.data(1).logicalSrcIdx = 150;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(39) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.hamu3nooom.gyucjoxwjz
	  section.data(1).logicalSrcIdx = 151;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(40) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.jgkqqwc2m5a.arvghscytc
	  section.data(1).logicalSrcIdx = 152;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(41) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.n014eikjcjy.c1gzfpfi1s
	  section.data(1).logicalSrcIdx = 153;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(42) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.otw02eo3ue3.gyucjoxwjz
	  section.data(1).logicalSrcIdx = 154;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(43) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.lyyly4yad2e2d.ptbhifuxoj
	  section.data(1).logicalSrcIdx = 155;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(44) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.lyyly4yad2e2d.jba4z1ves1
	  section.data(1).logicalSrcIdx = 156;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(45) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.jrnktqme1n3b1.a5tso3rzwb
	  section.data(1).logicalSrcIdx = 157;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(46) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.jrnktqme1n3b1.i5l1aq2a5d
	  section.data(1).logicalSrcIdx = 158;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(47) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.lyyly4yad2e2.ptbhifuxoj
	  section.data(1).logicalSrcIdx = 159;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(48) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.lyyly4yad2e2.jba4z1ves1
	  section.data(1).logicalSrcIdx = 160;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(49) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.jrnktqme1n3b.a5tso3rzwb
	  section.data(1).logicalSrcIdx = 161;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(50) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.jrnktqme1n3b.i5l1aq2a5d
	  section.data(1).logicalSrcIdx = 162;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(51) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (dwork)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    dworkMap.nTotData = nTotData;
    


  ;%
  ;% Add individual maps to base struct.
  ;%

  targMap.paramMap  = paramMap;    
  targMap.signalMap = sigMap;
  targMap.dworkMap  = dworkMap;
  
  ;%
  ;% Add checksums to base struct.
  ;%


  targMap.checksum0 = 3229635691;
  targMap.checksum1 = 895491095;
  targMap.checksum2 = 1600266565;
  targMap.checksum3 = 2963355993;

