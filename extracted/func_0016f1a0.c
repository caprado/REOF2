void func_0016f1a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4;
    
    sp = sp + -0x50;                                            // 0x0016f1a0: addiu $sp, $sp, -0x50
    a2 = 0x7fff << 16;                                          // 0x0016f1cc: lui $a2, 0x7fff
    *(uint32_t*)(s1) = 0;                                       // 0x0016f1d8: sw $zero, 0($s1)
    a1 = 1;                                                     // 0x0016f1dc: addiu $a1, $zero, 1
    v1 = *(int32_t*)(s3);                                       // 0x0016f1e0: lw $v1, 0($s3)
    a2 = a2 | 0xffff;                                           // 0x0016f1e4: ori $a2, $a2, 0xffff
    *(uint32_t*)(s4) = 0;                                       // 0x0016f1e8: sw $zero, 0($s4)
    v0 = g_002157d4;  // Global at 0x002157d4                   // 0x0016f1ec: lw $v0, 0x18($v1)
    /* call function at address in v0 */                        // 0x0016f1f0: jalr $v0
    *(uint32_t*)(s5) = 0;                                       // 0x0016f1f4: sw $zero, 0($s5)
    a2 = 0xcc;                                                  // 0x0016f1f8: addiu $a2, $zero, 0xcc
    a0 = local_0;                                               // 0x0016f1fc: lw $a0, 0($sp)
    func_00158518();  // 0x158410                                // 0x0016f200: jal 0x158410
    a1 = local_4;                                               // 0x0016f204: lw $a1, 4($sp)
    if (s0 == 0) goto label_0x16f2b8;                           // 0x0016f20c: beqz $s0, 0x16f2b8
    v1 = 0x21 << 16;                                            // 0x0016f210: lui $v1, 0x21
    func_00158310();  // 0x158278                                // 0x0016f214: jal 0x158278
    v0 = v0 & 4;                                                // 0x0016f21c: andi $v0, $v0, 4
    if (v0 == 0) goto label_0x16f2d8;                           // 0x0016f220: beqz $v0, 0x16f2d8
    a1 = local_4;                                               // 0x0016f224: lw $a1, 4($sp)
    a2 = local_0;                                               // 0x0016f228: lw $a2, 0($sp)
    v0 = s0 - a2;                                               // 0x0016f22c: subu $v0, $s0, $a2
    v0 = v0 + 6;                                                // 0x0016f230: addiu $v0, $v0, 6
    v0 = (a1 < v0) ? 1 : 0;                                     // 0x0016f234: slt $v0, $a1, $v0
    if (v0 != 0) goto label_0x16f2b8;                           // 0x0016f238: bnez $v0, 0x16f2b8
    v1 = 0x21 << 16;                                            // 0x0016f23c: lui $v1, 0x21
    v0 = *(uint8_t*)((s0) + 5);                                 // 0x0016f240: lbu $v0, 5($s0)
    a0 = 3;                                                     // 0x0016f244: addiu $a0, $zero, 3
    v0 = v0 & 7;                                                // 0x0016f24c: andi $v0, $v0, 7
    v0 = v0 << 2;                                               // 0x0016f250: sll $v0, $v0, 2
    v1 = 0x23 << 16;                                            // 0x0016f254: lui $v1, 0x23
    v1 = v1 + v0;                                               // 0x0016f258: addu $v1, $v1, $v0
    v1 = g_00229180;  // Global at 0x00229180                   // 0x0016f25c: lw $v1, -0x6e80($v1)
    if (v1 != a0) goto label_0x16f2d8;                          // 0x0016f260: bne $v1, $a0, 0x16f2d8
    *(uint32_t*)(s1) = v1;                                      // 0x0016f264: sw $v1, 0($s1)
    v0 = a2 - s0;                                               // 0x0016f268: subu $v0, $a2, $s0
    a2 = 0x22;                                                  // 0x0016f26c: addiu $a2, $zero, 0x22
    s2 = v0 + a1;                                               // 0x0016f270: addu $s2, $v0, $a1
    func_00158518();  // 0x158410                                // 0x0016f278: jal 0x158410
    /* beqzl $s1, 0x16f2dc */                                   // 0x0016f284: beqzl $s1, 0x16f2dc
    v1 = *(int32_t*)(s3);                                       // 0x0016f288: lw $v1, 0($s3)
    func_00158310();  // 0x158278                                // 0x0016f28c: jal 0x158278
    v0 = v0 & 0x20;                                             // 0x0016f294: andi $v0, $v0, 0x20
    if (v0 == 0) goto label_0x16f2d8;                           // 0x0016f298: beqz $v0, 0x16f2d8
    func_00158518();  // 0x158410                                // 0x0016f2a4: jal 0x158410
    a2 = 2;                                                     // 0x0016f2a8: addiu $a2, $zero, 2
    if (v0 != 0) goto label_0x16f2d0;                           // 0x0016f2ac: bnez $v0, 0x16f2d0
    v0 = v0 - s1;                                               // 0x0016f2b0: subu $v0, $v0, $s1
    v1 = 0x21 << 16;                                            // 0x0016f2b4: lui $v1, 0x21
label_0x16f2b8:
    v1 = v1 + 0x57bc;                                           // 0x0016f2b8: addiu $v1, $v1, 0x57bc
    v0 = g_002157bc;  // Global at 0x002157bc                   // 0x0016f2bc: lw $v0, 0($v1)
    v0 = v0 + 1;                                                // 0x0016f2c0: addiu $v0, $v0, 1
    goto label_0x16f2d8;                                        // 0x0016f2c4: b 0x16f2d8
    g_002157bc = v0;  // Global at 0x002157bc                   // 0x0016f2c8: sw $v0, 0($v1)
    /* nop */                                                   // 0x0016f2cc: nop 
label_0x16f2d0:
    *(uint32_t*)(s4) = s1;                                      // 0x0016f2d0: sw $s1, 0($s4)
    *(uint32_t*)(s5) = v0;                                      // 0x0016f2d4: sw $v0, 0($s5)
label_0x16f2d8:
    v1 = *(int32_t*)(s3);                                       // 0x0016f2d8: lw $v1, 0($s3)
    a1 = 1;                                                     // 0x0016f2e0: addiu $a1, $zero, 1
    v0 = g_002157d8;  // Global at 0x002157d8                   // 0x0016f2e4: lw $v0, 0x1c($v1)
    /* call function at address in v0 */                        // 0x0016f2e8: jalr $v0
    return;                                                     // 0x0016f30c: jr $ra
    sp = sp + 0x50;                                             // 0x0016f310: addiu $sp, $sp, 0x50
}