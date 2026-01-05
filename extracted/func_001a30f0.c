void func_001a30f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001a30f0: addiu $sp, $sp, -0x10
    func_001a2e50();  // 1a2e50                                // 0x001a30f8: jal 0x1a2e50
    /* nop */                                                   // 0x001a30fc: nop 
    if (v0 != 0) goto label_0x1a3110;                           // 0x001a3100: bnez $v0, 0x1a3110
    goto label_0x1a3130;                                        // 0x001a3108: b 0x1a3130
label_0x1a3110:
    a1 = 5 << 16;                                               // 0x001a3110: lui $a1, 5
    func_001a3230();  // 1a3230                                // 0x001a3114: jal 0x1a3230
    if (v0 != 0) goto label_0x1a312c;                           // 0x001a311c: bnez $v0, 0x1a312c
    /* nop */                                                   // 0x001a3120: nop 
    goto label_0x1a3130;                                        // 0x001a3124: b 0x1a3130
label_0x1a312c:
    v0 = *(int32_t*)((v0) + 4);                                 // 0x001a312c: lw $v0, 4($v0)
label_0x1a3130:
    return;                                                     // 0x001a3134: jr $ra
    sp = sp + 0x10;                                             // 0x001a3138: addiu $sp, $sp, 0x10
}