void func_001ce3b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001ce3b0: addiu $sp, $sp, -0x40
    v1 = 0x32 << 16;                                            // 0x001ce3b4: lui $v1, 0x32
    at = 0x32 << 16;                                            // 0x001ce3bc: lui $at, 0x32
    v1 = v1 + -0x950;                                           // 0x001ce3c4: addiu $v1, $v1, -0x950
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001ce3c8: addu.qb $zero, $sp, $s1
    v0 = s1 + 2;                                                // 0x001ce3dc: addiu $v0, $s1, 2
    a2 = g_003257d4;  // Global at 0x003257d4                   // 0x001ce3e0: lbu $a2, 0x57d4($at)
    a1 = v0 & 0xff;                                             // 0x001ce3e4: andi $a1, $v0, 0xff
    a0 = 0x32 << 16;                                            // 0x001ce3e8: lui $a0, 0x32
    a0 = a0 + 0x5828;                                           // 0x001ce3ec: addiu $a0, $a0, 0x5828
    v0 = a2 << 4;                                               // 0x001ce3f0: sll $v0, $a2, 4
    at = 0x32 << 16;                                            // 0x001ce3f4: lui $at, 0x32
    v0 = v0 - a2;                                               // 0x001ce3f8: subu $v0, $v0, $a2
    v0 = v0 << 2;                                               // 0x001ce3fc: sll $v0, $v0, 2
    a0 = a0 + v0;                                               // 0x001ce400: addu $a0, $a0, $v0
    v0 = g_00325828;  // Global at 0x00325828                   // 0x001ce404: lw $v0, 0($a0)
    v0 = v0 + 1;                                                // 0x001ce408: addiu $v0, $v0, 1
    g_00325828 = v0;  // Global at 0x00325828                   // 0x001ce40c: sw $v0, 0($a0)
    a0 = g_003257d4;  // Global at 0x003257d4                   // 0x001ce410: lbu $a0, 0x57d4($at)
    v0 = a0 << 1;                                               // 0x001ce414: sll $v0, $a0, 1
    v0 = v0 + a0;                                               // 0x001ce418: addu $v0, $v0, $a0
    v0 = v0 << 3;                                               // 0x001ce41c: sll $v0, $v0, 3
    thunk_func_001cff70();  // 0x1ce7e0                          // 0x001ce420: jal 0x1ce7e0
    a0 = v1 + v0;                                               // 0x001ce424: addu $a0, $v1, $v0
    at = 0x32 << 16;                                            // 0x001ce428: lui $at, 0x32
    a0 = 0x32 << 16;                                            // 0x001ce42c: lui $a0, 0x32
    a2 = g_003257d4;  // Global at 0x003257d4                   // 0x001ce430: lbu $a2, 0x57d4($at)
    v1 = s0 & 0xff;                                             // 0x001ce434: andi $v1, $s0, 0xff
    a0 = a0 + -0x950;                                           // 0x001ce438: addiu $a0, $a0, -0x950
    a1 = a2 << 1;                                               // 0x001ce43c: sll $a1, $a2, 1
    v0 = a2 & 0xf;                                              // 0x001ce440: andi $v0, $a2, 0xf
    a1 = a1 + a2;                                               // 0x001ce444: addu $a1, $a1, $a2
    v0 = v1 | v0;                                               // 0x001ce448: or $v0, $v1, $v0
    v1 = a1 << 3;                                               // 0x001ce44c: sll $v1, $a1, 3
    a1 = v0 & 0xff;                                             // 0x001ce450: andi $a1, $v0, 0xff
    thunk_func_001cff70();  // 0x1ce7e0                          // 0x001ce454: jal 0x1ce7e0
    a0 = a0 + v1;                                               // 0x001ce458: addu $a0, $a0, $v1
    if (s1 == 0) goto label_0x1ce490;                           // 0x001ce45c: beqz $s1, 0x1ce490
    /* nop */                                                   // 0x001ce460: nop 
    at = 0x32 << 16;                                            // 0x001ce464: lui $at, 0x32
    v0 = 0x32 << 16;                                            // 0x001ce468: lui $v0, 0x32
    a0 = g_003257d4;  // Global at 0x003257d4                   // 0x001ce46c: lbu $a0, 0x57d4($at)
    v0 = v0 + -0x950;                                           // 0x001ce470: addiu $v0, $v0, -0x950
    v1 = a0 << 1;                                               // 0x001ce47c: sll $v1, $a0, 1
    v1 = v1 + a0;                                               // 0x001ce480: addu $v1, $v1, $a0
    v1 = v1 << 3;                                               // 0x001ce484: sll $v1, $v1, 3
    thunk_func_001cfdf0();  // 0x1ce7b0                          // 0x001ce488: jal 0x1ce7b0
    a0 = v0 + v1;                                               // 0x001ce48c: addu $a0, $v0, $v1
label_0x1ce490:
    at = 0x32 << 16;                                            // 0x001ce490: lui $at, 0x32
    a0 = 0x32 << 16;                                            // 0x001ce494: lui $a0, 0x32
    a2 = g_003257d4;  // Global at 0x003257d4                   // 0x001ce498: lbu $a2, 0x57d4($at)
    a0 = a0 + 0x5844;                                           // 0x001ce49c: addiu $a0, $a0, 0x5844
    v1 = s1 + 2;                                                // 0x001ce4a0: addiu $v1, $s1, 2
    v0 = 0x28;                                                  // 0x001ce4a4: addiu $v0, $zero, 0x28
    a1 = a2 << 4;                                               // 0x001ce4a8: sll $a1, $a2, 4
    at = 0x32 << 16;                                            // 0x001ce4ac: lui $at, 0x32
    a1 = a1 - a2;                                               // 0x001ce4b0: subu $a1, $a1, $a2
    a1 = a1 << 2;                                               // 0x001ce4b4: sll $a1, $a1, 2
    a1 = a0 + a1;                                               // 0x001ce4b8: addu $a1, $a0, $a1
    a0 = *(int32_t*)(a1);                                       // 0x001ce4bc: lw $a0, 0($a1)
    a0 = a0 + 1;                                                // 0x001ce4c0: addiu $a0, $a0, 1
    *(uint32_t*)(a1) = a0;                                      // 0x001ce4c4: sw $a0, 0($a1)
    a0 = g_00325800;  // Global at 0x00325800                   // 0x001ce4c8: lw $a0, 0x5800($at)
    a0 = a0 + 1;                                                // 0x001ce4cc: addiu $a0, $a0, 1
    at = 0x32 << 16;                                            // 0x001ce4d0: lui $at, 0x32
    if (v1 != v0) goto label_0x1ce4e8;                          // 0x001ce4d4: bne $v1, $v0, 0x1ce4e8
    g_00325800 = a0;  // Global at 0x00325800                   // 0x001ce4d8: sw $a0, 0x5800($at)
    v0 = s0 + 0x30;                                             // 0x001ce4dc: addiu $v0, $s0, 0x30
    s1 = s1 + 1;                                                // 0x001ce4e0: addiu $s1, $s1, 1
    s0 = v0 & 0xff;                                             // 0x001ce4e4: andi $s0, $v0, 0xff
label_0x1ce4e8:
    v0 = s1 + 2;                                                // 0x001ce4e8: addiu $v0, $s1, 2
    a0 = 0x32 << 16;                                            // 0x001ce4ec: lui $a0, 0x32
    a0 = a0 + 0x4f90;                                           // 0x001ce4f0: addiu $a0, $a0, 0x4f90
    thunk_func_001cff70();  // 0x1ce7e0                          // 0x001ce4f4: jal 0x1ce7e0
    a1 = v0 & 0xff;                                             // 0x001ce4f8: andi $a1, $v0, 0xff
    at = 0x32 << 16;                                            // 0x001ce4fc: lui $at, 0x32
    a0 = 0x32 << 16;                                            // 0x001ce500: lui $a0, 0x32
    v0 = g_003257d4;  // Global at 0x003257d4                   // 0x001ce504: lbu $v0, 0x57d4($at)
    v1 = s0 & 0xff;                                             // 0x001ce508: andi $v1, $s0, 0xff
    a0 = a0 + 0x4f90;                                           // 0x001ce50c: addiu $a0, $a0, 0x4f90
    v0 = v0 & 0xf;                                              // 0x001ce510: andi $v0, $v0, 0xf
    v0 = v1 | v0;                                               // 0x001ce514: or $v0, $v1, $v0
    thunk_func_001cff70();  // 0x1ce7e0                          // 0x001ce518: jal 0x1ce7e0
    a1 = v0 & 0xff;                                             // 0x001ce51c: andi $a1, $v0, 0xff
    if (s1 == 0) goto label_0x1ce538;                           // 0x001ce520: beqz $s1, 0x1ce538
    a0 = 0x32 << 16;                                            // 0x001ce524: lui $a0, 0x32
    thunk_func_001cfdf0();  // 0x1ce7b0                          // 0x001ce530: jal 0x1ce7b0
    a0 = a0 + 0x4f90;                                           // 0x001ce534: addiu $a0, $a0, 0x4f90
label_0x1ce538:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001ce53c: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001ce540: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001ce544: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001ce548: jr $ra
    sp = sp + 0x40;                                             // 0x001ce54c: addiu $sp, $sp, 0x40
}