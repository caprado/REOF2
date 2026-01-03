void func_00148420() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00148420: addiu $sp, $sp, -0x10
    v0 = 1;                                                     // 0x00148424: addiu $v0, $zero, 1
    g_002271e8 = v0;  // Global at 0x002271e8                   // 0x0014842c: sw $v0, 0x830($a0)
    func_0011d320();  // 11d320                                // 0x00148430: jal 0x11d320
    g_00226b80 = 0;  // Global at 0x00226b80                    // 0x00148434: sw $zero, 0x1c8($a0)
    a2 = 0x1000 << 16;                                          // 0x00148438: lui $a2, 0x1000
    a3 = 0x1000 << 16;                                          // 0x0014843c: lui $a3, 0x1000
    a2 = a2 | 0xf520;                                           // 0x00148440: ori $a2, $a2, 0xf520
    t0 = 1 << 16;                                               // 0x00148444: lui $t0, 1
    v1 = g_10000000;  // Global at 0x10000000                   // 0x00148448: lw $v1, 0($a2)
    a3 = a3 | 0xf590;                                           // 0x0014844c: ori $a3, $a3, 0xf590
    a0 = 0x1000 << 16;                                          // 0x00148450: lui $a0, 0x1000
    a1 = 0x1000 << 16;                                          // 0x00148454: lui $a1, 0x1000
    v1 = v1 | t0;                                               // 0x00148458: or $v1, $v1, $t0
    a0 = a0 | 0xb000;                                           // 0x0014845c: ori $a0, $a0, 0xb000
    g_10000000 = v1;  // Global at 0x10000000                   // 0x00148460: sw $v1, 0($a3)
    a1 = a1 | 0xb400;                                           // 0x00148464: ori $a1, $a1, 0xb400
    g_10000000 = 0;  // Global at 0x10000000                    // 0x00148468: sw $zero, 0($a0)
    v1 = 0x1000 << 16;                                          // 0x0014846c: lui $v1, 0x1000
    g_10000000 = 0;  // Global at 0x10000000                    // 0x00148470: sw $zero, 0($a1)
    v1 = v1 | 0xd400;                                           // 0x00148474: ori $v1, $v1, 0xd400
    g_10000000 = 0;  // Global at 0x10000000                    // 0x00148478: sw $zero, 0($v1)
    a0 = 0xfffe << 16;                                          // 0x0014847c: lui $a0, 0xfffe
    a0 = a0 | 0xffff;                                           // 0x00148480: ori $a0, $a0, 0xffff
    v1 = g_10000000;  // Global at 0x10000000                   // 0x00148484: lw $v1, 0($a2)
    v1 = v1 & a0;                                               // 0x00148488: and $v1, $v1, $a0
    g_10000000 = v1;  // Global at 0x10000000                   // 0x0014848c: sw $v1, 0($a3)
    if (v0 == 0) goto label_0x1484a4;                           // 0x00148490: beqz $v0, 0x1484a4
    v0 = 0x1000 << 16;                                          // 0x00148494: lui $v0, 0x1000
    func_0011d378();  // 11d378                                // 0x00148498: jal 0x11d378
    /* nop */                                                   // 0x0014849c: nop 
    v0 = 0x1000 << 16;                                          // 0x001484a0: lui $v0, 0x1000
label_0x1484a4:
    a0 = 0x1000 << 16;                                          // 0x001484a4: lui $a0, 0x1000
    v0 = v0 | 0xb020;                                           // 0x001484a8: ori $v0, $v0, 0xb020
    a0 = a0 | 0xb420;                                           // 0x001484ac: ori $a0, $a0, 0xb420
    g_10000000 = 0;  // Global at 0x10000000                    // 0x001484b0: sw $zero, 0($v0)
    v1 = 0x1000 << 16;                                          // 0x001484b4: lui $v1, 0x1000
    g_10000000 = 0;  // Global at 0x10000000                    // 0x001484b8: sw $zero, 0($a0)
    v1 = v1 | 0xd420;                                           // 0x001484bc: ori $v1, $v1, 0xd420
    g_10000000 = 0;  // Global at 0x10000000                    // 0x001484c0: sw $zero, 0($v1)
    v0 = 0x1000 << 16;                                          // 0x001484c4: lui $v0, 0x1000
    v0 = v0 | 0x2010;                                           // 0x001484c8: ori $v0, $v0, 0x2010
    v1 = 0x4000 << 16;                                          // 0x001484cc: lui $v1, 0x4000
    g_10000000 = v1;  // Global at 0x10000000                   // 0x001484d8: sw $v1, 0($v0)
    return func_00113b78();  // Tail call                       // 0x001484e0: j 0x113b78
    sp = sp + 0x10;                                             // 0x001484e4: addiu $sp, $sp, 0x10
    a0 = 0x22 << 16;                                            // 0x001484ec: lui $a0, 0x22
    return func_00116598();  // Tail call                        // 0x001484f0: j 0x116508
    a0 = &str_002269b8;  // "vertical size > 2800"              // 0x001484f4: addiu $a0, $a0, 0x69b8
    sp = sp + -0x120;                                           // 0x001484f8: addiu $sp, $sp, -0x120
    func_0010a4d8();  // 10a4d8                                // 0x00148508: jal 0x10a4d8
    func_00148530();  // 148530                                // 0x00148514: jal 0x148530
    return;                                                     // 0x00148524: jr $ra
    sp = sp + 0x120;                                            // 0x00148528: addiu $sp, $sp, 0x120
}