void func_0015e260() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x40;                                            // 0x0015e260: addiu $sp, $sp, -0x40
    v0 = -1;                                                    // 0x0015e264: addiu $v0, $zero, -1
    v1 = ((unsigned)s3 < (unsigned)0x800) ? 1 : 0;              // 0x0015e278: sltiu $v1, $s3, 0x800
    if (v1 != 0) goto label_0x15e314;                           // 0x0015e290: bnez $v1, 0x15e314
    *(uint32_t*)((s4) + 0x1c) = v0;                             // 0x0015e294: sw $v0, 0x1c($s4)
    if (s2 == 0) goto label_0x15e314;                           // 0x0015e298: beqz $s2, 0x15e314
    s1 = 2;                                                     // 0x0015e29c: addiu $s1, $zero, 2
label_0x15e2a0:
    v0 = (s1 < 4) ? 1 : 0;                                      // 0x0015e2a0: slti $v0, $s1, 4
label_0x15e2a4:
    if (v0 == 0) goto label_0x15e318;                           // 0x0015e2a4: beqz $v0, 0x15e318
    a0 = s1 << 0xb;                                             // 0x0015e2ac: sll $a0, $s1, 0xb
    s1 = s1 + 1;                                                // 0x0015e2b0: addiu $s1, $s1, 1
    a0 = a0 + -0x800;                                           // 0x0015e2b4: addiu $a0, $a0, -0x800
    a1 = s3 - a0;                                               // 0x0015e2b8: subu $a1, $s3, $a0
    func_00178e78();  // 0x178db0                                // 0x0015e2bc: jal 0x178db0
    a0 = s2 + a0;                                               // 0x0015e2c0: addu $a0, $s2, $a0
    if (s0 == 0) goto label_0x15e2a0;                           // 0x0015e2cc: beqz $s0, 0x15e2a0
    func_001790b8();  // 0x178fc8                                // 0x0015e2d4: jal 0x178fc8
    /* nop */                                                   // 0x0015e2d8: nop 
    if (v0 == 0) goto label_0x15e2ec;                           // 0x0015e2dc: beqz $v0, 0x15e2ec
    v0 = local_0;                                               // 0x0015e2e0: lw $v0, 0($sp)
    if (v0 != 0) goto label_0x15e300;                           // 0x0015e2e4: bnez $v0, 0x15e300
    /* nop */                                                   // 0x0015e2e8: nop 
label_0x15e2ec:
    func_00178ec8();  // 0x178e78                                // 0x0015e2ec: jal 0x178e78
    goto label_0x15e2a4;                                        // 0x0015e2f4: b 0x15e2a4
    v0 = (s1 < 4) ? 1 : 0;                                      // 0x0015e2f8: slti $v0, $s1, 4
    /* nop */                                                   // 0x0015e2fc: nop 
label_0x15e300:
    func_0015e260();  // 0x15e230                                // 0x0015e300: jal 0x15e230
    func_00178ec8();  // 0x178e78                                // 0x0015e30c: jal 0x178e78
    *(uint32_t*)((s4) + 0x1c) = v0;                             // 0x0015e310: sw $v0, 0x1c($s4)
label_0x15e314:
label_0x15e318:
    return;                                                     // 0x0015e32c: jr $ra
    sp = sp + 0x40;                                             // 0x0015e330: addiu $sp, $sp, 0x40
}