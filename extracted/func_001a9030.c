void func_001a9030() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001a9030: addiu $sp, $sp, -0x10
    if (a0 != 0) goto label_0x1a9054;                           // 0x001a9034: bnez $a0, 0x1a9054
    func_001a8fc0();  // 0x1a8e70                                // 0x001a903c: jal 0x1a8e70
    a0 = 4;                                                     // 0x001a9040: addiu $a0, $zero, 4
    v1 = 4;                                                     // 0x001a9044: addiu $v1, $zero, 4
    at = 0x31 << 16;                                            // 0x001a9048: lui $at, 0x31
    goto label_0x1a9068;                                        // 0x001a904c: b 0x1a9068
    g_0031387a = v1;  // Global at 0x0031387a                   // 0x001a9050: sb $v1, 0x387a($at)
label_0x1a9054:
    func_001a8fc0();  // 0x1a8e70                                // 0x001a9054: jal 0x1a8e70
    a0 = 6;                                                     // 0x001a9058: addiu $a0, $zero, 6
    v1 = 6;                                                     // 0x001a905c: addiu $v1, $zero, 6
    at = 0x31 << 16;                                            // 0x001a9060: lui $at, 0x31
    g_0031387a = v1;  // Global at 0x0031387a                   // 0x001a9064: sb $v1, 0x387a($at)
label_0x1a9068:
    return;                                                     // 0x001a906c: jr $ra
    sp = sp + 0x10;                                             // 0x001a9070: addiu $sp, $sp, 0x10
}