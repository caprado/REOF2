void func_0015b208() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0015b208: addiu $sp, $sp, -0x20
    func_0015afe8();  // 15afe8                                // 0x0015b21c: jal 0x15afe8
    *(uint32_t*)((s0) + 0x18c) = 0;                             // 0x0015b224: sw $zero, 0x18c($s0)
    a1 = 0x25 << 16;                                            // 0x0015b228: lui $a1, 0x25
    a1 = a1 + 0x63f0;                                           // 0x0015b22c: addiu $a1, $a1, 0x63f0
    a2 = 0x10;                                                  // 0x0015b230: addiu $a2, $zero, 0x10
    func_00155db0();  // 155db0                                // 0x0015b234: jal 0x155db0
    a0 = s0 + 0x190;                                            // 0x0015b238: addiu $a0, $s0, 0x190
    func_00158af0();  // 158af0                                // 0x0015b23c: jal 0x158af0
    a0 = s0 + 0x224;                                            // 0x0015b240: addiu $a0, $s0, 0x224
    func_0015b0d0();  // 15b0d0                                // 0x0015b244: jal 0x15b0d0
    a0 = s0 + 0x1d0;                                            // 0x0015b248: addiu $a0, $s0, 0x1d0
    *(uint32_t*)((s0) + 0x340) = 0;                             // 0x0015b24c: sw $zero, 0x340($s0)
    v0 = *(int32_t*)((s0) + 0x1ac);                             // 0x0015b250: lw $v0, 0x1ac($s0)
    *(uint32_t*)((s0) + 0x344) = 0;                             // 0x0015b254: sw $zero, 0x344($s0)
    *(uint32_t*)((s0) + 0x374) = v0;                            // 0x0015b258: sw $v0, 0x374($s0)
    *(uint32_t*)((s0) + 0x354) = 0;                             // 0x0015b25c: sw $zero, 0x354($s0)
    *(uint32_t*)((s0) + 0x358) = 0;                             // 0x0015b260: sw $zero, 0x358($s0)
    *(uint32_t*)((s0) + 0x35c) = 0;                             // 0x0015b264: sw $zero, 0x35c($s0)
    *(uint32_t*)((s0) + 0x360) = 0;                             // 0x0015b268: sw $zero, 0x360($s0)
    *(uint32_t*)((s0) + 0x364) = 0;                             // 0x0015b26c: sw $zero, 0x364($s0)
    /* nop */                                                   // 0x0015b274: nop 
label_0x15b278:
    s1 = s1 + 1;                                                // 0x0015b278: addiu $s1, $s1, 1
    func_00159178();  // 159178                                // 0x0015b288: jal 0x159178
    v0 = (s1 < 4) ? 1 : 0;                                      // 0x0015b290: slti $v0, $s1, 4
    if (v0 != 0) goto label_0x15b278;                           // 0x0015b294: bnez $v0, 0x15b278
    func_001591a0();  // 1591a0                                // 0x0015b2a4: jal 0x1591a0
    v0 = 2;                                                     // 0x0015b2ac: addiu $v0, $zero, 2
    *(uint32_t*)((s0) + 0x188) = v0;                            // 0x0015b2b0: sw $v0, 0x188($s0)
    return;                                                     // 0x0015b2c4: jr $ra
    sp = sp + 0x20;                                             // 0x0015b2c8: addiu $sp, $sp, 0x20
}