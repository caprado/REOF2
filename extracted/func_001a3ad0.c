void func_001a3ad0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001a3ad0: addiu $sp, $sp, -0x10
    func_001a3230();  // 0x1a31e0                                // 0x001a3ae4: jal 0x1a31e0
    a1 = 0xc << 16;                                             // 0x001a3ae8: lui $a1, 0xc
    if (v0 == 0) goto label_0x1a3b08;                           // 0x001a3aec: beqz $v0, 0x1a3b08
    func_001a41d0();  // 0x1a3bb0                                // 0x001a3af8: jal 0x1a3bb0
    goto label_0x1a3b14;                                        // 0x001a3b00: b 0x1a3b14
label_0x1a3b08:
    func_001a4890();  // 0x1a41d0                                // 0x001a3b08: jal 0x1a41d0
label_0x1a3b14:
    return;                                                     // 0x001a3b14: jr $ra
    sp = sp + 0x10;                                             // 0x001a3b18: addiu $sp, $sp, 0x10
}