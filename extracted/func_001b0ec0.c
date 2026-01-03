void func_001b0ec0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001b0ec0: addiu $sp, $sp, -0x10
    a0 = 0x4d << 16;                                            // 0x001b0ec4: lui $a0, 0x4d
    v0 = 7 << 16;                                               // 0x001b0ec8: lui $v0, 7
    a0 = a0 + -0xb50;                                           // 0x001b0ed0: addiu $a0, $a0, -0xb50
    func_00107c70();  // 107c70                                // 0x001b0ed8: jal 0x107c70
    a2 = v0 | 0x800;                                            // 0x001b0edc: ori $a2, $v0, 0x800
    v1 = 0x4c << 16;                                            // 0x001b0ee0: lui $v1, 0x4c
    a3 = 0x54 << 16;                                            // 0x001b0ee4: lui $a3, 0x54
    v1 = v1 + 0x4290;                                           // 0x001b0ee8: addiu $v1, $v1, 0x4290
    a3 = a3 + -0x4e0;                                           // 0x001b0eec: addiu $a3, $a3, -0x4e0
    *(uint32_t*)((gp) + -0x6120) = v1;                          // 0x001b0ef0: sw $v1, -0x6120($gp)
label_0x1b0ef8:
    a1 = *(int32_t*)((gp) + -0x6120);                           // 0x001b0ef8: lw $a1, -0x6120($gp)
    v1 = a2 + 1;                                                // 0x001b0efc: addiu $v1, $a2, 1
    v1 = (a2 < 0x480) ? 1 : 0;                                  // 0x001b0f08: slti $v1, $a2, 0x480
    a0 = a1 + -4;                                               // 0x001b0f0c: addiu $a0, $a1, -4
    *(uint32_t*)((gp) + -0x6120) = a0;                          // 0x001b0f10: sw $a0, -0x6120($gp)
    *(uint32_t*)((a1) + -4) = a3;                               // 0x001b0f14: sw $a3, -4($a1)
    if (v1 != 0) goto label_0x1b0ef8;                           // 0x001b0f18: bnez $v1, 0x1b0ef8
    a3 = a3 + -0x190;                                           // 0x001b0f1c: addiu $a3, $a3, -0x190
    v1 = 0x480;                                                 // 0x001b0f20: addiu $v1, $zero, 0x480
    *(uint16_t*)((gp) + -0x611c) = v1;                          // 0x001b0f24: sh $v1, -0x611c($gp)
    return;                                                     // 0x001b0f2c: jr $ra
    sp = sp + 0x10;                                             // 0x001b0f30: addiu $sp, $sp, 0x10
}