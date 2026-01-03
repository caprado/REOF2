void func_001886f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001886f0: addiu $sp, $sp, -0x40
    func_001886c0();  // 1886c0                                // 0x00188704: jal 0x1886c0
    if (v0 != 0) goto label_0x18871c;                           // 0x0018870c: bnez $v0, 0x18871c
    s1 = 0x24;                                                  // 0x00188710: addiu $s1, $zero, 0x24
    goto label_0x188740;                                        // 0x00188714: b 0x188740
label_0x18871c:
    s0 = 0x28 << 16;                                            // 0x0018871c: lui $s0, 0x28
    s0 = s0 + -0x2fb8;                                          // 0x00188724: addiu $s0, $s0, -0x2fb8
    v0 = s0 + s1;                                               // 0x00188728: addu $v0, $s0, $s1
    func_00188bf8();  // 188bf8                                // 0x0018872c: jal 0x188bf8
    a0 = *(int32_t*)((v0) + 4);                                 // 0x00188730: lw $a0, 4($v0)
    s1 = s1 + s0;                                               // 0x00188734: addu $s1, $s1, $s0
    v0 = 1;                                                     // 0x00188738: addiu $v0, $zero, 1
    *(uint32_t*)(s1) = 0;                                       // 0x0018873c: sw $zero, 0($s1)
label_0x188740:
    return;                                                     // 0x00188750: jr $ra
    sp = sp + 0x40;                                             // 0x00188754: addiu $sp, $sp, 0x40
}