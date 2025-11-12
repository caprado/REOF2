void func_001c1ad0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001c1ad0: addiu $sp, $sp, -0x10
    at = 0x31 << 16;                                            // 0x001c1ad4: lui $at, 0x31
    a2 = g_00313870;  // Global at 0x00313870                   // 0x001c1adc: lw $a2, 0x3870($at)
    if (a2 != 0) goto label_0x1c1af0;                           // 0x001c1ae0: bnez $a2, 0x1c1af0
    v1 = a0 << 0xc;                                             // 0x001c1ae4: sll $v1, $a0, 0xc
    goto label_0x1c1b14;                                        // 0x001c1ae8: b 0x1c1b14
label_0x1c1af0:
    v0 = a1 << 6;                                               // 0x001c1af0: sll $v0, $a1, 6
    a2 = a2 + v1;                                               // 0x001c1af4: addu $a2, $a2, $v1
    a1 = 0x31 << 16;                                            // 0x001c1af8: lui $a1, 0x31
    a2 = a2 + v0;                                               // 0x001c1afc: addu $a2, $a2, $v0
    a1 = a1 + 0x63d0;                                           // 0x001c1b00: addiu $a1, $a1, 0x63d0
    func_001c1640();  // 0x1c15a0                                // 0x001c1b04: jal 0x1c15a0
    v0 = 0x31 << 16;                                            // 0x001c1b0c: lui $v0, 0x31
    v0 = v0 + 0x63d0;                                           // 0x001c1b10: addiu $v0, $v0, 0x63d0
label_0x1c1b14:
    return;                                                     // 0x001c1b18: jr $ra
    sp = sp + 0x10;                                             // 0x001c1b1c: addiu $sp, $sp, 0x10
}