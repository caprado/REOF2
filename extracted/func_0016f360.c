void func_0016f360() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4, local_8, local_c;
    
    sp = sp + -0x50;                                            // 0x0016f360: addiu $sp, $sp, -0x50
    func_00166ca8();  // 166ca8                                // 0x0016f37c: jal 0x166ca8
    a1 = *(int32_t*)((s1) + 0x1b38);                            // 0x0016f380: lw $a1, 0x1b38($s1)
    /* bnezl $v0, 0x16f428 */                                   // 0x0016f384: bnezl $v0, 0x16f428
    v0 = local_4;                                               // 0x0016f38c: lw $v0, 4($sp)
    if (v0 == 0) goto label_0x16f424;                           // 0x0016f390: beqz $v0, 0x16f424
    func_0016c958();  // 16c958                                // 0x0016f39c: jal 0x16c958
    a2 = sp + 0x20;                                             // 0x0016f3a0: addiu $a2, $sp, 0x20
    if (a0 != 0) goto label_0x16f3d0;                           // 0x0016f3a8: bnez $a0, 0x16f3d0
    v1 = local_0;                                               // 0x0016f3ac: lw $v1, 0($sp)
    v0 = local_4;                                               // 0x0016f3b0: lw $v0, 4($sp)
    v1 = local_c;                                               // 0x0016f3b4: lw $v1, 0xc($sp)
    v0 = v0 + v1;                                               // 0x0016f3b8: addu $v0, $v0, $v1
    a1 = v0 + -3;                                               // 0x0016f3bc: addiu $a1, $v0, -3
    if (a1 >= 0) goto label_0x16f41c;                           // 0x0016f3c0: bgez $a1, 0x16f41c
    /* nop */                                                   // 0x0016f3c4: nop 
    goto label_0x16f41c;                                        // 0x0016f3c8: b 0x16f41c
label_0x16f3d0:
    v0 = ((unsigned)a0 < (unsigned)v1) ? 1 : 0;                 // 0x0016f3d0: sltu $v0, $a0, $v1
    if (v0 != 0) goto label_0x16f3f4;                           // 0x0016f3d4: bnez $v0, 0x16f3f4
    a2 = local_8;                                               // 0x0016f3d8: lw $a2, 8($sp)
    v0 = local_4;                                               // 0x0016f3dc: lw $v0, 4($sp)
    v0 = v1 + v0;                                               // 0x0016f3e0: addu $v0, $v1, $v0
    v0 = ((unsigned)a0 < (unsigned)v0) ? 1 : 0;                 // 0x0016f3e4: sltu $v0, $a0, $v0
    if (v0 != 0) goto label_0x16f41c;                           // 0x0016f3e8: bnez $v0, 0x16f41c
    a1 = a0 - v1;                                               // 0x0016f3ec: subu $a1, $a0, $v1
    a2 = local_8;                                               // 0x0016f3f0: lw $a2, 8($sp)
label_0x16f3f4:
    v0 = ((unsigned)a0 < (unsigned)a2) ? 1 : 0;                 // 0x0016f3f4: sltu $v0, $a0, $a2
    if (v0 != 0) goto label_0x16f41c;                           // 0x0016f3f8: bnez $v0, 0x16f41c
    v0 = local_c;                                               // 0x0016f400: lw $v0, 0xc($sp)
    v0 = a2 + v0;                                               // 0x0016f404: addu $v0, $a2, $v0
    v0 = ((unsigned)a0 < (unsigned)v0) ? 1 : 0;                 // 0x0016f408: sltu $v0, $a0, $v0
    if (v0 == 0) goto label_0x16f41c;                           // 0x0016f40c: beqz $v0, 0x16f41c
    v1 = local_4;                                               // 0x0016f410: lw $v1, 4($sp)
    v0 = a0 - a2;                                               // 0x0016f414: subu $v0, $a0, $a2
    a1 = v0 + v1;                                               // 0x0016f418: addu $a1, $v0, $v1
label_0x16f41c:
    func_0016f438();  // 16f438                                // 0x0016f41c: jal 0x16f438
label_0x16f424:
    return;                                                     // 0x0016f430: jr $ra
    sp = sp + 0x50;                                             // 0x0016f434: addiu $sp, $sp, 0x50
}