void func_00100250() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00100250: addiu $sp, $sp, -0x30
    func_00100e38();  // 0x100d98                                // 0x00100264: jal 0x100d98
    a0 = 1;                                                     // 0x00100268: addiu $a0, $zero, 1
    if (v0 != 0) goto label_0x1002a4;                           // 0x0010026c: bnez $v0, 0x1002a4
    func_0011d378();  // 0x11d320                                // 0x00100274: jal 0x11d320
    /* nop */                                                   // 0x00100278: nop 
    v1 = 0x25 << 16;                                            // 0x0010027c: lui $v1, 0x25
    a0 = 0x25 << 16;                                            // 0x00100280: lui $a0, 0x25
    s0 = g_0024b700;  // Global at 0x0024b700                   // 0x00100284: lw $s0, -0x4900($v1)
    g_0024b700 = s1;  // Global at 0x0024b700                   // 0x00100288: sw $s1, -0x4900($v1)
    g_0024b704 = gp;  // Global at 0x0024b704                   // 0x0010028c: sw $gp, -0x48fc($a0)
    if (v0 == 0) goto label_0x1002a4;                           // 0x00100290: beqz $v0, 0x1002a4
    func_0011d390();  // 0x11d378                                // 0x00100298: jal 0x11d378
    /* nop */                                                   // 0x0010029c: nop 
label_0x1002a4:
    return;                                                     // 0x001002b0: jr $ra
    sp = sp + 0x30;                                             // 0x001002b4: addiu $sp, $sp, 0x30
}