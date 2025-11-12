void func_0017e530() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x26 << 16;                                            // 0x0017e530: lui $v0, 0x26
    v1 = -1;                                                    // 0x0017e534: addiu $v1, $zero, -1
    a2 = g_002678d8;  // Global at 0x002678d8                   // 0x0017e538: lw $a2, 0x78d8($v0)
    if (a2 == v1) goto label_0x17e63c;                          // 0x0017e53c: beq $a2, $v1, 0x17e63c
    v1 = 0x26 << 16;                                            // 0x0017e544: lui $v1, 0x26
    a1 = 1;                                                     // 0x0017e548: addiu $a1, $zero, 1
    a0 = v1 + 0x7904;                                           // 0x0017e54c: addiu $a0, $v1, 0x7904
    v0 = g_00267904;  // Global at 0x00267904                   // 0x0017e550: lw $v0, 0($a0)
    v0 = v0 + 1;                                                // 0x0017e558: addiu $v0, $v0, 1
    g_00267904 = v0;  // Global at 0x00267904                   // 0x0017e55c: sw $v0, 0($a0)
    v1 = g_00267904;  // Global at 0x00267904                   // 0x0017e560: lw $v1, 0($a0)
    if (v1 != a1) goto label_0x17e5e8;                          // 0x0017e564: bne $v1, $a1, 0x17e5e8
    a1 = a2 << 2;                                               // 0x0017e568: sll $a1, $a2, 2
    v0 = 0x26 << 16;                                            // 0x0017e56c: lui $v0, 0x26
    v1 = 0x26 << 16;                                            // 0x0017e570: lui $v1, 0x26
    t0 = v0 + 0x78e0;                                           // 0x0017e574: addiu $t0, $v0, 0x78e0
    v0 = 0x26 << 16;                                            // 0x0017e578: lui $v0, 0x26
    v1 = v1 + 0x78f0;                                           // 0x0017e580: addiu $v1, $v1, 0x78f0
    a1 = a2 << 2;                                               // 0x0017e584: sll $a1, $a2, 2
    t1 = v0 + 0x7900;                                           // 0x0017e588: addiu $t1, $v0, 0x7900
    a2 = 0x23 << 16;                                            // 0x0017e58c: lui $a2, 0x23
    a2 = a2 + a1;                                               // 0x0017e590: addu $a2, $a2, $a1
    a2 = g_00229e10;  // Global at 0x00229e10                   // 0x0017e594: lw $a2, -0x61f0($a2)
    g_00267900 = v1;  // Global at 0x00267900                   // 0x0017e5a4: sw $v1, 0($t1)
    a0 = g_00230000;  // Global at 0x00230000                   // 0x0017e5a8: lw $a0, 0($a2)
    v0 = g_002678e8;  // Global at 0x002678e8                   // 0x0017e5ac: lhu $v0, 8($t0)
    a3 = a0 & 0xffff;                                           // 0x0017e5b0: andi $a3, $a0, 0xffff
    v0 = ((unsigned)a3 < (unsigned)v0) ? 1 : 0;                 // 0x0017e5b4: sltu $v0, $a3, $v0
    if (v0 == 0) goto label_0x17e5d0;                           // 0x0017e5b8: beqz $v0, 0x17e5d0
    /* nop */                                                   // 0x0017e5bc: nop 
    v1 = 1 << 16;                                               // 0x0017e5c4: lui $v1, 1
label_0x17e5d0:
    g_002678e8 = a3;  // Global at 0x002678e8                   // 0x0017e5d0: sh $a3, 8($t0)
    g_00267900 = t0;  // Global at 0x00267900                   // 0x0017e5d8: sw $t0, 0($t1)
    goto label_0x17e62c;                                        // 0x0017e5dc: b 0x17e62c
    /* nop */                                                   // 0x0017e5e4: nop 
label_0x17e5e8:
    v1 = 0x26 << 16;                                            // 0x0017e5e8: lui $v1, 0x26
    v0 = 0x23 << 16;                                            // 0x0017e5ec: lui $v0, 0x23
    v0 = v0 + a1;                                               // 0x0017e5f0: addu $v0, $v0, $a1
    v0 = g_00229e10;  // Global at 0x00229e10                   // 0x0017e5f4: lw $v0, -0x61f0($v0)
    v1 = v1 + 0x7900;                                           // 0x0017e5f8: addiu $v1, $v1, 0x7900
    a0 = g_00230000;  // Global at 0x00230000                   // 0x0017e5fc: lw $a0, 0($v0)
    a1 = g_00267900;  // Global at 0x00267900                   // 0x0017e600: lw $a1, 0($v1)
    a3 = a0 & 0xffff;                                           // 0x0017e604: andi $a3, $a0, 0xffff
    a0 = g_00267900;  // Global at 0x00267900                   // 0x0017e60c: lw $a0, 0($v1)
    v0 = g_0026790c;  // Global at 0x0026790c                   // 0x0017e614: lhu $v0, 8($a0)
    v0 = ((unsigned)a3 < (unsigned)v0) ? 1 : 0;                 // 0x0017e618: sltu $v0, $a3, $v0
    if (v0 == 0) goto label_0x17e62c;                           // 0x0017e61c: beqz $v0, 0x17e62c
    /* nop */                                                   // 0x0017e620: nop 
    v0 = 1 << 16;                                               // 0x0017e624: lui $v0, 1
label_0x17e62c:
    v1 = *(int32_t*)(t2);                                       // 0x0017e62c: lw $v1, 0($t2)
    v1 = v1 + -1;                                               // 0x0017e634: addiu $v1, $v1, -1
    *(uint32_t*)(t2) = v1;                                      // 0x0017e638: sw $v1, 0($t2)
label_0x17e63c:
    return;                                                     // 0x0017e63c: jr $ra
    /* nop */                                                   // 0x0017e640: nop 
}