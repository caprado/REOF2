void func_00131138() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00131138: addiu $sp, $sp, -0x10
    return func_0013c6a8();  // Tail call                        // 0x00131144: j 0x13c680
    sp = sp + 0x10;                                             // 0x00131148: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0013114c: nop 
    sp = sp + -0x10;                                            // 0x00131150: addiu $sp, $sp, -0x10
    if (s0 == 0) goto label_0x131180;                           // 0x0013115c: beqz $s0, 0x131180
    func_0013c6d8();  // 0x13c6a8                                // 0x00131164: jal 0x13c6a8
    a0 = g_001f59cc;  // Global at 0x001f59cc                   // 0x00131168: lw $a0, 4($s0)
    a0 = g_001f59c8;  // Global at 0x001f59c8                   // 0x0013116c: lw $a0, 0($s0)
    return func_0013c768();  // Tail call                        // 0x00131178: j 0x13c6d8
    sp = sp + 0x10;                                             // 0x0013117c: addiu $sp, $sp, 0x10
label_0x131180:
    func_0013c6d8();  // 0x13c6a8                                // 0x00131180: jal 0x13c6a8
    /* nop */                                                   // 0x00131184: nop 
    return func_0013c768();  // Tail call                        // 0x00131194: j 0x13c6d8
    sp = sp + 0x10;                                             // 0x00131198: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0013119c: nop 
    sp = sp + -0x30;                                            // 0x001311a0: addiu $sp, $sp, -0x30
    s0 = *(int32_t*)((s4) + 0xc);                               // 0x001311c4: lw $s0, 0xc($s4)
    func_0013eea0();  // 0x13eea0                               // 0x001311c8: jal 0x13eea0
    func_0013ee88();  // 0x13ee88                               // 0x001311d8: jal 0x13ee88
    a1 = 1;                                                     // 0x001311e0: addiu $a1, $zero, 1
    v1 = g_001f59c8;  // Global at 0x001f59c8                   // 0x001311e8: lw $v1, 0($s0)
    v0 = g_001f0024;  // Global at 0x001f0024                   // 0x001311ec: lw $v0, 0x24($v1)
    /* call function at address in v0 */                        // 0x001311f0: jalr $v0
    v1 = g_001f59c8;  // Global at 0x001f59c8                   // 0x001311f8: lw $v1, 0($s0)
    v0 = g_001f0024;  // Global at 0x001f0024                   // 0x00131204: lw $v0, 0x24($v1)
    /* call function at address in v0 */                        // 0x00131208: jalr $v0
    a1 = 1;                                                     // 0x00131214: addiu $a1, $zero, 1
    func_00140ae0();  // 0x140a90                                // 0x00131218: jal 0x140a90
    func_00140ae0();  // 0x140a90                                // 0x00131228: jal 0x140a90
    a0 = 0x22 << 16;                                            // 0x00131230: lui $a0, 0x22
    a3 = s2 + s3;                                               // 0x00131234: addu $a3, $s2, $s3
    a0 = &str_002236d0;  // "niop0=%4d, niop2=%4d, sum=%4d\n"   // 0x00131240: addiu $a0, $a0, 0x36d0
    func_00116598();  // 0x116508                                // 0x00131244: jal 0x116508
    a0 = 0x22 << 16;                                            // 0x0013124c: lui $a0, 0x22
    a3 = s0 + s1;                                               // 0x00131250: addu $a3, $s0, $s1
    s0 = s0 + s3;                                               // 0x00131258: addu $s0, $s0, $s3
    func_00116598();  // 0x116508                                // 0x00131260: jal 0x116508
    a0 = &str_002236f0;  // "stat=%4d, ttl=%4d\n"               // 0x00131264: addiu $a0, $a0, 0x36f0
    a0 = 0x22 << 16;                                            // 0x00131268: lui $a0, 0x22
    s2 = s2 + s1;                                               // 0x0013126c: addu $s2, $s2, $s1
    a2 = s2 + s0;                                               // 0x00131274: addu $a2, $s2, $s0
    a1 = *(int8_t*)((s4) + 1);                                  // 0x0013127c: lb $a1, 1($s4)
    a0 = &str_00223710;  // "E02080804 ADXT_Create: parameter error" // 0x00131280: addiu $a0, $a0, 0x3710
    return func_00116598();  // Tail call                        // 0x00131294: j 0x116508
    sp = sp + 0x30;                                             // 0x00131298: addiu $sp, $sp, 0x30
    /* nop */                                                   // 0x0013129c: nop 
    sp = sp + -0x30;                                            // 0x001312a0: addiu $sp, $sp, -0x30
    v0 = a1 + 0x3f;                                             // 0x001312a4: addiu $v0, $a1, 0x3f
    v1 = -0x40;                                                 // 0x001312a8: addiu $v1, $zero, -0x40
    s1 = v0 & v1;                                               // 0x001312b0: and $s1, $v0, $v1
    v0 = s1 - a1;                                               // 0x001312b8: subu $v0, $s1, $a1
    s2 = a2 - v0;                                               // 0x001312c4: subu $s2, $a2, $v0
    if (s3 < 0) goto label_0x1312e4;                            // 0x001312cc: bltz $s3, 0x1312e4
    /* beqzl $a1, 0x1312e8 */                                   // 0x001312d4: beqzl $a1, 0x1312e8
    a0 = 0x22 << 16;                                            // 0x001312d8: lui $a0, 0x22
    if (a2 >= 0) goto label_0x1312f8;                           // 0x001312dc: bgez $a2, 0x1312f8
label_0x1312e4:
    a0 = 0x22 << 16;                                            // 0x001312e4: lui $a0, 0x22
    func_00127de8();  // 0x127d90                                // 0x001312e8: jal 0x127d90
    a0 = &str_00223728;  // "E02080805 ADXT_Destroy: parameter error" // 0x001312ec: addiu $a0, $a0, 0x3728
    goto label_0x13156c;                                        // 0x001312f0: b 0x13156c
label_0x1312f8:
    v0 = (a0 < 0x10) ? 1 : 0;                                   // 0x001312f8: slti $v0, $a0, 0x10
    if (v0 == 0) goto label_0x131330;                           // 0x001312fc: beqz $v0, 0x131330
    v1 = 0x10;                                                  // 0x00131300: addiu $v1, $zero, 0x10
    v0 = a0 << 1;                                               // 0x00131304: sll $v0, $a0, 1
    v0 = v0 + a0;                                               // 0x00131308: addu $v0, $v0, $a0
    v0 = v0 << 4;                                               // 0x0013130c: sll $v0, $v0, 4
    v0 = v0 + a0;                                               // 0x00131310: addu $v0, $v0, $a0
    v0 = v0 << 2;                                               // 0x00131314: sll $v0, $v0, 2
    v1 = 0x1f << 16;                                            // 0x00131318: lui $v1, 0x1f
    v1 = v1 + v0;                                               // 0x0013131c: addu $v1, $v1, $v0
    v1 = g_001f59c8;  // Global at 0x001f59c8                   // 0x00131320: lb $v1, 0x59c8($v1)
    /* bnezl $v1, 0x1312f8 */                                   // 0x00131324: bnezl $v1, 0x1312f8
    a0 = a0 + 1;                                                // 0x00131328: addiu $a0, $a0, 1
    v1 = 0x10;                                                  // 0x0013132c: addiu $v1, $zero, 0x10
label_0x131330:
    if (a0 == v1) goto label_0x13156c;                          // 0x00131330: beq $a0, $v1, 0x13156c
    v0 = a0 << 1;                                               // 0x00131338: sll $v0, $a0, 1
    v0 = v0 + a0;                                               // 0x00131340: addu $v0, $v0, $a0
    a2 = 0xc4;                                                  // 0x00131344: addiu $a2, $zero, 0xc4
    v0 = v0 << 4;                                               // 0x00131348: sll $v0, $v0, 4
    v0 = v0 + a0;                                               // 0x0013134c: addu $v0, $v0, $a0
    v0 = v0 << 2;                                               // 0x00131350: sll $v0, $v0, 2
    s0 = 0x1f << 16;                                            // 0x00131354: lui $s0, 0x1f
    s0 = s0 + 0x59c8;                                           // 0x00131358: addiu $s0, $s0, 0x59c8
    s0 = s0 + v0;                                               // 0x0013135c: addu $s0, $s0, $v0
    func_00107d30();  // 0x107c70                                // 0x00131360: jal 0x107c70
    g_001f59cb = s3;  // Global at 0x001f59cb                   // 0x00131368: sb $s3, 3($s0)
    v0 = s3 << 6;                                               // 0x0013136c: sll $v0, $s3, 6
    t2 = 0x24;                                                  // 0x00131370: addiu $t2, $zero, 0x24
    v0 = v0 + s3;                                               // 0x00131374: addu $v0, $v0, $s3
    t0 = 0x2000;                                                // 0x00131378: addiu $t0, $zero, 0x2000
    v0 = v0 << 2;                                               // 0x0013137c: sll $v0, $v0, 2
    t1 = 0x2060;                                                // 0x00131380: addiu $t1, $zero, 0x2060
    v0 = v0 - s3;                                               // 0x00131384: subu $v0, $v0, $s3
    a2 = 0x24;                                                  // 0x00131388: addiu $a2, $zero, 0x24
    v0 = v0 << 6;                                               // 0x0013138c: sll $v0, $v0, 6
    g_001f59f4 = s1;  // Global at 0x001f59f4                   // 0x00131390: sw $s1, 0x2c($s0)
    a1 = s2 - v0;                                               // 0x00131394: subu $a1, $s2, $v0
    v0 = s1 + v0;                                               // 0x00131398: addu $v0, $s1, $v0
    v1 = a1 + -0x124;                                           // 0x0013139c: addiu $v1, $a1, -0x124
    a1 = a1 + 0x6db;                                            // 0x001313a0: addiu $a1, $a1, 0x6db
    a3 = (v1 < 0) ? 1 : 0;                                      // 0x001313a4: slti $a3, $v1, 0
    if (a3 != 0) v1 = a1;                                       // 0x001313ac: movn $v1, $a1, $a3
    g_001f59e8 = v0;  // Global at 0x001f59e8                   // 0x001313b0: sw $v0, 0x20($s0)
    v1 = v1 >> 0xb;                                             // 0x001313b4: sra $v1, $v1, 0xb
    g_001f59f8 = t0;  // Global at 0x001f59f8                   // 0x001313b8: sw $t0, 0x30($s0)
    v1 = v1 << 0xb;                                             // 0x001313bc: sll $v1, $v1, 0xb
    g_001f59fc = t1;  // Global at 0x001f59fc                   // 0x001313c0: sw $t1, 0x34($s0)
    a3 = v1 + t2;                                               // 0x001313c4: addu $a3, $v1, $t2
    v0 = v0 + a3;                                               // 0x001313cc: addu $v0, $v0, $a3
    g_001f59ec = v1;  // Global at 0x001f59ec                   // 0x001313d0: sw $v1, 0x24($s0)
    g_001f5a78 = v0;  // Global at 0x001f5a78                   // 0x001313d4: sw $v0, 0xb0($s0)
    g_001f59f0 = t2;  // Global at 0x001f59f0                   // 0x001313d8: sw $t2, 0x28($s0)
    func_0013f658();  // 0x13f568                                // 0x001313dc: jal 0x13f568
    g_001f59dc = 0;  // Global at 0x001f59dc                    // 0x001313e0: sw $zero, 0x14($s0)
    if (v0 == 0) goto label_0x131490;                           // 0x001313e4: beqz $v0, 0x131490
    g_001f59d8 = v0;  // Global at 0x001f59d8                   // 0x001313e8: sw $v0, 0x10($s0)
    func_001300e0();  // 0x130098                                // 0x001313f0: jal 0x130098
    if (v0 == 0) goto label_0x131490;                           // 0x001313f8: beqz $v0, 0x131490
    g_001f59d0 = v0;  // Global at 0x001f59d0                   // 0x001313fc: sw $v0, 8($s0)
    if (s3 <= 0) goto label_0x131450;                           // 0x00131400: blez $s3, 0x131450
    s2 = s0 + 0x18;                                             // 0x00131408: addiu $s2, $s0, 0x18
    a2 = g_001f59fc;  // Global at 0x001f59fc                   // 0x0013140c: lw $a2, 0x34($s0)
    a1 = g_001f59f8;  // Global at 0x001f59f8                   // 0x00131410: lw $a1, 0x30($s0)
    s1 = s1 + 1;                                                // 0x00131418: addiu $s1, $s1, 1
    v0 = g_001f59f4;  // Global at 0x001f59f4                   // 0x0013141c: lw $v0, 0x2c($s0)
    a2 = a2 - a1;                                               // 0x00131420: subu $a2, $a2, $a1
    a2 = a2 << 1;                                               // 0x00131424: sll $a2, $a2, 1
    a1 = a1 << 1;                                               // 0x00131428: sll $a1, $a1, 1
    a0 = a0 << 1;                                               // 0x0013142c: sll $a0, $a0, 1
    func_0013f658();  // 0x13f568                                // 0x00131430: jal 0x13f568
    a0 = v0 + a0;                                               // 0x00131434: addu $a0, $v0, $a0
    v1 = (s1 < s3) ? 1 : 0;                                     // 0x00131438: slt $v1, $s1, $s3
    g_001f59e0 = v0;  // Global at 0x001f59e0                   // 0x0013143c: sw $v0, 0($s2)
    if (v0 == 0) goto label_0x131490;                           // 0x00131440: beqz $v0, 0x131490
    s2 = s2 + 4;                                                // 0x00131444: addiu $s2, $s2, 4
    /* bnezl $v1, 0x131410 */                                   // 0x00131448: bnezl $v1, 0x131410
    a2 = g_001f59fc;  // Global at 0x001f59fc                   // 0x0013144c: lw $a2, 0x34($s0)
label_0x131450:
    s1 = s0 + 0x18;                                             // 0x00131450: addiu $s1, $s0, 0x18
    a0 = g_001f59d8;  // Global at 0x001f59d8                   // 0x00131454: lw $a0, 0x10($s0)
    func_0012c818();  // 0x12c698                                // 0x0013145c: jal 0x12c698
    if (v0 == 0) goto label_0x131490;                           // 0x00131464: beqz $v0, 0x131490
    g_001f59cc = v0;  // Global at 0x001f59cc                   // 0x00131468: sw $v0, 4($s0)
    func_0012c340();  // 0x12c328                                // 0x00131470: jal 0x12c328
    if (v0 == 0) goto label_0x131490;                           // 0x00131478: beqz $v0, 0x131490
    g_001f59d4 = v0;  // Global at 0x001f59d4                   // 0x0013147c: sw $v0, 0xc($s0)
    func_0013c978();  // 0x13c870                                // 0x00131480: jal 0x13c870
    a0 = g_001f59d8;  // Global at 0x001f59d8                   // 0x00131484: lw $a0, 0x10($s0)
    if (v0 != 0) goto label_0x1314a0;                           // 0x00131488: bnez $v0, 0x1314a0
    g_001f5a5c = v0;  // Global at 0x001f5a5c                   // 0x0013148c: sw $v0, 0x94($s0)
label_0x131490:
    func_00131808();  // 0x1315d8                                // 0x00131490: jal 0x1315d8
    goto label_0x13156c;                                        // 0x00131498: b 0x13156c
label_0x1314a0:
    a1 = g_001f59d0;  // Global at 0x001f59d0                   // 0x001314a0: lw $a1, 8($s0)
    func_0013c9d0();  // 0x13c9c8                                // 0x001314a4: jal 0x13c9c8
    a2 = 0x20 << 16;                                            // 0x001314ac: lui $a2, 0x20
    v0 = g_001f59ec;  // Global at 0x001f59ec                   // 0x001314b0: lw $v0, 0x24($s0)
    at = 0x3f59 << 16;                                          // 0x001314b4: lui $at, 0x3f59
    at = at | 0x9999;                                           // 0x001314b8: ori $at, $at, 0x9999
    /* move to FPU: $at, $f1 */                                 // 0x001314bc: mtc1 $at, $f1
    v1 = (v0 < 0) ? 1 : 0;                                      // 0x001314c0: slti $v1, $v0, 0
    a0 = v0 + 0x7ff;                                            // 0x001314c4: addiu $a0, $v0, 0x7ff
    if (v1 != 0) v0 = a0;                                       // 0x001314c8: movn $v0, $a0, $v1
    a1 = g_00201d58;  // Global at 0x00201d58                   // 0x001314cc: lw $a1, 0x1d58($a2)
    v0 = v0 >> 0xb;                                             // 0x001314d0: sra $v0, $v0, 0xb
    g_001f5a08 = 0;  // Global at 0x001f5a08                    // 0x001314d4: sh $zero, 0x40($s0)
    v1 = v0 << 0x10;                                            // 0x001314d8: sll $v1, $v0, 0x10
    g_001f5a04 = v0;  // Global at 0x001f5a04                   // 0x001314dc: sh $v0, 0x3c($s0)
    v1 = v1 >> 0x10;                                            // 0x001314e0: sra $v1, $v1, 0x10
    g_001f5a00 = a1;  // Global at 0x001f5a00                   // 0x001314e4: sw $a1, 0x38($s0)
    /* move to FPU: $v1, $f0 */                                 // 0x001314e8: mtc1 $v1, $f0
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x001314ec: cvt.s.w $f0, $f0
    /* FPU: mul.s $f0, $f0, $f1 */                              // 0x001314f0: mul.s $f0, $f0, $f1
    /* FPU: cvt.w.s $f1, $f0 */                                 // 0x001314f4: cvt.w.s $f1, $f0
    /* move from FPU: $v0, $f1 */                               // 0x001314f8: mfc1 $v0, $f1
    if (s3 <= 0) goto label_0x13152c;                           // 0x001314fc: blez $s3, 0x13152c
    g_001f5a06 = v0;  // Global at 0x001f5a06                   // 0x00131500: sh $v0, 0x3e($s0)
    v1 = -0x80;                                                 // 0x00131508: addiu $v1, $zero, -0x80
    v0 = s0 + 0x42;                                             // 0x0013150c: addiu $v0, $s0, 0x42
label_0x131510:
    s1 = s1 + -1;                                               // 0x00131510: addiu $s1, $s1, -1
    g_001f5a0a = v1;  // Global at 0x001f5a0a                   // 0x00131514: sh $v1, 0($v0)
    /* nop */                                                   // 0x00131518: nop 
    /* nop */                                                   // 0x0013151c: nop 
    /* nop */                                                   // 0x00131520: nop 
    if (s1 != 0) goto label_0x131510;                           // 0x00131524: bnez $s1, 0x131510
    v0 = v0 + 2;                                                // 0x00131528: addiu $v0, $v0, 2
label_0x13152c:
    v1 = 1;                                                     // 0x0013152c: addiu $v1, $zero, 1
    g_001f5a0e = 0;  // Global at 0x001f5a0e                    // 0x00131530: sh $zero, 0x46($s0)
    g_001f59c8 = v1;  // Global at 0x001f59c8                   // 0x00131534: sb $v1, 0($s0)
    g_001f5a34 = v1;  // Global at 0x001f5a34                   // 0x0013153c: sb $v1, 0x6c($s0)
    g_001f5a1c = 0;  // Global at 0x001f5a1c                    // 0x00131540: sw $zero, 0x54($s0)
    g_001f5a20 = 0;  // Global at 0x001f5a20                    // 0x00131544: sw $zero, 0x58($s0)
    g_001f5a24 = 0;  // Global at 0x001f5a24                    // 0x00131548: sw $zero, 0x5c($s0)
    g_001f5a28 = 0;  // Global at 0x001f5a28                    // 0x0013154c: sh $zero, 0x60($s0)
    g_001f5a2c = 0;  // Global at 0x001f5a2c                    // 0x00131550: sw $zero, 0x64($s0)
    g_001f5a30 = 0;  // Global at 0x001f5a30                    // 0x00131554: sh $zero, 0x68($s0)
    g_001f5a32 = 0;  // Global at 0x001f5a32                    // 0x00131558: sh $zero, 0x6a($s0)
    g_001f5a35 = v1;  // Global at 0x001f5a35                   // 0x0013155c: sb $v1, 0x6d($s0)
    g_001f5a3a = 0;  // Global at 0x001f5a3a                    // 0x00131560: sb $zero, 0x72($s0)
    g_001f5a50 = 0;  // Global at 0x001f5a50                    // 0x00131564: sw $zero, 0x88($s0)
    g_001f5a60 = 0;  // Global at 0x001f5a60                    // 0x00131568: sb $zero, 0x98($s0)
label_0x13156c:
    return;                                                     // 0x00131580: jr $ra
    sp = sp + 0x30;                                             // 0x00131584: addiu $sp, $sp, 0x30
}