void func_001d9440() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001d9440: addiu $sp, $sp, -0x10
    at = 0x31 << 16;                                            // 0x001d9444: lui $at, 0x31
    v1 = g_003137b7;  // Global at 0x003137b7                   // 0x001d944c: lb $v1, 0x37b7($at)
    if (v1 != 0) goto label_0x1d9468;                           // 0x001d9450: bnez $v1, 0x1d9468
    /* nop */                                                   // 0x001d9454: nop 
    a0 = a0 & 0xff;                                             // 0x001d9458: andi $a0, $a0, 0xff
    v0 = a0 << 3;                                               // 0x001d945c: sll $v0, $a0, 3
    func_001d4c80();  // 0x1d4ab0                                // 0x001d9460: jal 0x1d4ab0
    a1 = v0 + 0x3000;                                           // 0x001d9464: addiu $a1, $v0, 0x3000
label_0x1d9468:
    return;                                                     // 0x001d946c: jr $ra
    sp = sp + 0x10;                                             // 0x001d9470: addiu $sp, $sp, 0x10
}