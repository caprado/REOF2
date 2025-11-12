void func_001ba010() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_1c, local_1d;
    
    sp = sp + -0x20;                                            // 0x001ba010: addiu $sp, $sp, -0x20
    a1 = sp + 0x1c;                                             // 0x001ba018: addiu $a1, $sp, 0x1c
    local_1c = 0;                                               // 0x001ba01c: sb $zero, 0x1c($sp)
    func_001ba0f0();  // 0x1ba070                                // 0x001ba020: jal 0x1ba070
    local_1d = 0;                                               // 0x001ba024: sb $zero, 0x1d($sp)
    at = 0x30 << 16;                                            // 0x001ba028: lui $at, 0x30
    g_00307f9c = 0;  // Global at 0x00307f9c                    // 0x001ba02c: sh $zero, 0x7f9c($at)
    at = 0x30 << 16;                                            // 0x001ba030: lui $at, 0x30
    g_00307f9e = 0;  // Global at 0x00307f9e                    // 0x001ba034: sh $zero, 0x7f9e($at)
    at = 0x30 << 16;                                            // 0x001ba038: lui $at, 0x30
    g_00307fa0 = 0;  // Global at 0x00307fa0                    // 0x001ba03c: sw $zero, 0x7fa0($at)
    at = 0x30 << 16;                                            // 0x001ba040: lui $at, 0x30
    g_00307f91 = 0;  // Global at 0x00307f91                    // 0x001ba044: sb $zero, 0x7f91($at)
    return;                                                     // 0x001ba04c: jr $ra
    sp = sp + 0x20;                                             // 0x001ba050: addiu $sp, $sp, 0x20
}