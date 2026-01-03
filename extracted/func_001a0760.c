void func_001a0760() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_818;
    
    sp = sp + -0x860;                                           // 0x001a0760: addiu $sp, $sp, -0x860
    v1 = 1;                                                     // 0x001a0764: addiu $v1, $zero, 1
    v0 = (v1 < 8) ? 1 : 0;                                      // 0x001a076c: slti $v0, $v1, 8
    local_818 = a0;                                             // 0x001a0770: sw $a0, 0x818($sp)
    if (v0 != 0) goto label_0x1a079c;                           // 0x001a078c: bnez $v0, 0x1a079c
    goto label_0x1a07a8;                                        // 0x001a0794: b 0x1a07a8
label_0x1a079c:
    v0 = 8;                                                     // 0x001a079c: addiu $v0, $zero, 8
    v0 = v0 - v1;                                               // 0x001a07a0: subu $v0, $v0, $v1
    v1 = v0 << 3;                                               // 0x001a07a4: sll $v1, $v0, 3
label_0x1a07a8:
    a1 = local_818;                                             // 0x001a07a8: lw $a1, 0x818($sp)
    v0 = sp + 0x860;                                            // 0x001a07ac: addiu $v0, $sp, 0x860
    a0 = sp + 0x10;                                             // 0x001a07b0: addiu $a0, $sp, 0x10
    func_0010f528();  // 10f528                                // 0x001a07b4: jal 0x10f528
    a2 = v0 - v1;                                               // 0x001a07b8: subu $a2, $v0, $v1
    func_0010ae00();  // 10ae00                                // 0x001a07bc: jal 0x10ae00
    a0 = sp + 0x10;                                             // 0x001a07c0: addiu $a0, $sp, 0x10
    v0 = v0 + sp;                                               // 0x001a07c4: addu $v0, $v0, $sp
    v1 = 0xd;                                                   // 0x001a07c8: addiu $v1, $zero, 0xd
    a0 = v0 + 0x10;                                             // 0x001a07cc: addiu $a0, $v0, 0x10
    v0 = 0xa;                                                   // 0x001a07d0: addiu $v0, $zero, 0xa
    str_0022a600 = v1;  // Global at 0x0022a600                 // 0x001a07d4: sb $v1, 0($a0)
    g_0022a601 = v0;  // Global at 0x0022a601                   // 0x001a07d8: sb $v0, 1($a0)
    g_0022a602 = 0;  // Global at 0x0022a602                    // 0x001a07dc: sb $zero, 2($a0)
    v0 = *(int32_t*)((gp) + -0x7d6c);                           // 0x001a07e0: lw $v0, -0x7d6c($gp)
    if (v0 == 0) goto label_0x1a0818;                           // 0x001a07e4: beqz $v0, 0x1a0818
    a0 = sp + 0x10;                                             // 0x001a07e8: addiu $a0, $sp, 0x10
    a0 = 0x23 << 16;                                            // 0x001a07ec: lui $a0, 0x23
    func_0010ae00();  // 10ae00                                // 0x001a07f0: jal 0x10ae00
    a0 = &str_0022a610;  // "This is not BMP image. @plBMPSetContextFromImage" // 0x001a07f4: addiu $a0, $a0, -0x59f0
    a0 = 0x23 << 16;                                            // 0x001a07f8: lui $a0, 0x23
    a1 = 0x23 << 16;                                            // 0x001a07fc: lui $a1, 0x23
    a0 = &str_0022a600;  // "Debug Message Output for PS2\r\n"  // 0x001a0804: addiu $a0, $a0, -0x5a00
    func_0018d760();  // 18d760                                // 0x001a0808: jal 0x18d760
    a1 = &str_0022a610;  // "This is not BMP image. @plBMPSetContextFromImage" // 0x001a080c: addiu $a1, $a1, -0x59f0
    *(uint32_t*)((gp) + -0x7d6c) = 0;                           // 0x001a0810: sw $zero, -0x7d6c($gp)
    a0 = sp + 0x10;                                             // 0x001a0814: addiu $a0, $sp, 0x10
label_0x1a0818:
    func_0010ae00();  // 10ae00                                // 0x001a0818: jal 0x10ae00
    /* nop */                                                   // 0x001a081c: nop 
    a0 = 0x23 << 16;                                            // 0x001a0820: lui $a0, 0x23
    a0 = &str_0022a600;  // "Debug Message Output for PS2\r\n"  // 0x001a0828: addiu $a0, $a0, -0x5a00
    func_0018d830();  // 18d830                                // 0x001a082c: jal 0x18d830
    a1 = sp + 0x10;                                             // 0x001a0830: addiu $a1, $sp, 0x10
    v0 = 1;                                                     // 0x001a0838: addiu $v0, $zero, 1
    return;                                                     // 0x001a083c: jr $ra
    sp = sp + 0x860;                                            // 0x001a0840: addiu $sp, $sp, 0x860
}