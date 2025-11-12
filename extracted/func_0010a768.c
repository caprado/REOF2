void func_0010a768() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0010a768: addiu $sp, $sp, -0x10
    a1 = g_0022000e;  // Global at 0x0022000e                   // 0x0010a770: lh $a1, 0xe($a0)
    a0 = g_00220054;  // Global at 0x00220054                   // 0x0010a778: lw $a0, 0x54($a0)
    return func_00103a50();  // Tail call                        // 0x0010a77c: j 0x1039f8
    sp = sp + 0x10;                                             // 0x0010a780: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0010a784: nop 
    a3 = *(int8_t*)(t0);                                        // 0x0010a78c: lb $a3, 0($t0)
    if (a3 == 0) goto label_0x10a820;                           // 0x0010a790: beqz $a3, 0x10a820
    a1 = *(int8_t*)(t1);                                        // 0x0010a798: lb $a1, 0($t1)
    a2 = a3 + 0x20;                                             // 0x0010a79c: addiu $a2, $a3, 0x20
    v0 = 0x22 << 16;                                            // 0x0010a7a0: lui $v0, 0x22
    v0 = v0 + a3;                                               // 0x0010a7a4: addu $v0, $v0, $a3
    v0 = g_0021ffe9;  // Global at 0x0021ffe9                   // 0x0010a7a8: lbu $v0, -0x17($v0)
    v1 = 0x22 << 16;                                            // 0x0010a7ac: lui $v1, 0x22
    v1 = v1 + a1;                                               // 0x0010a7b0: addu $v1, $v1, $a1
    v1 = g_0021ffe9;  // Global at 0x0021ffe9                   // 0x0010a7b4: lbu $v1, -0x17($v1)
    a0 = a1 + 0x20;                                             // 0x0010a7b8: addiu $a0, $a1, 0x20
    v0 = v0 & 1;                                                // 0x0010a7bc: andi $v0, $v0, 1
    v1 = v1 & 1;                                                // 0x0010a7c0: andi $v1, $v1, 1
    if (v0 == 0) a2 = a3;                                       // 0x0010a7c4: movz $a2, $a3, $v0
    if (v1 == 0) a0 = a1;                                       // 0x0010a7c8: movz $a0, $a1, $v1
    if (a2 != a0) goto label_0x10a824;                          // 0x0010a7cc: bnel $a2, $a0, 0x10a824
    a1 = *(uint8_t*)(t0);                                       // 0x0010a7d0: lbu $a1, 0($t0)
    t0 = t0 + 1;                                                // 0x0010a7d4: addiu $t0, $t0, 1
label_0x10a7d8:
    t1 = t1 + 1;                                                // 0x0010a7d8: addiu $t1, $t1, 1
    a2 = *(int8_t*)(t0);                                        // 0x0010a7dc: lb $a2, 0($t0)
    if (a2 == 0) goto label_0x10a820;                           // 0x0010a7e0: beqz $a2, 0x10a820
    a3 = a2 + 0x20;                                             // 0x0010a7e4: addiu $a3, $a2, 0x20
    a1 = *(int8_t*)(t1);                                        // 0x0010a7e8: lb $a1, 0($t1)
    v0 = 0x22 << 16;                                            // 0x0010a7ec: lui $v0, 0x22
    v0 = v0 + a2;                                               // 0x0010a7f0: addu $v0, $v0, $a2
    v0 = g_0021ffe9;  // Global at 0x0021ffe9                   // 0x0010a7f4: lbu $v0, -0x17($v0)
    v1 = 0x22 << 16;                                            // 0x0010a7f8: lui $v1, 0x22
    v1 = v1 + a1;                                               // 0x0010a7fc: addu $v1, $v1, $a1
    v1 = g_0021ffe9;  // Global at 0x0021ffe9                   // 0x0010a800: lbu $v1, -0x17($v1)
    a0 = a1 + 0x20;                                             // 0x0010a804: addiu $a0, $a1, 0x20
    v0 = v0 & 1;                                                // 0x0010a808: andi $v0, $v0, 1
    v1 = v1 & 1;                                                // 0x0010a80c: andi $v1, $v1, 1
    if (v0 != 0) a2 = a3;                                       // 0x0010a810: movn $a2, $a3, $v0
    if (v1 == 0) a0 = a1;                                       // 0x0010a814: movz $a0, $a1, $v1
    if (a2 == a0) goto label_0x10a7d8;                          // 0x0010a818: beql $a2, $a0, 0x10a7d8
    t0 = t0 + 1;                                                // 0x0010a81c: addiu $t0, $t0, 1
label_0x10a820:
    a1 = *(uint8_t*)(t0);                                       // 0x0010a820: lbu $a1, 0($t0)
label_0x10a824:
    v0 = *(uint8_t*)(t1);                                       // 0x0010a824: lbu $v0, 0($t1)
    a0 = 0x22 << 16;                                            // 0x0010a828: lui $a0, 0x22
    a0 = a0 + a1;                                               // 0x0010a82c: addu $a0, $a0, $a1
    a0 = g_0021ffe9;  // Global at 0x0021ffe9                   // 0x0010a830: lbu $a0, -0x17($a0)
    a3 = a1 + 0x20;                                             // 0x0010a834: addiu $a3, $a1, 0x20
    v1 = 0x22 << 16;                                            // 0x0010a838: lui $v1, 0x22
    v1 = v1 + v0;                                               // 0x0010a83c: addu $v1, $v1, $v0
    v1 = g_0021ffe9;  // Global at 0x0021ffe9                   // 0x0010a840: lbu $v1, -0x17($v1)
    a2 = v0 + 0x20;                                             // 0x0010a844: addiu $a2, $v0, 0x20
    a0 = a0 & 1;                                                // 0x0010a848: andi $a0, $a0, 1
    v1 = v1 & 1;                                                // 0x0010a84c: andi $v1, $v1, 1
    if (a0 != 0) a1 = a3;                                       // 0x0010a850: movn $a1, $a3, $a0
    if (v1 != 0) v0 = a2;                                       // 0x0010a854: movn $v0, $a2, $v1
    return;                                                     // 0x0010a858: jr $ra
    v0 = a1 - v0;                                               // 0x0010a85c: subu $v0, $a1, $v0
}