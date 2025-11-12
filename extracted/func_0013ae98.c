void func_0013ae98() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x0013ae98: addiu $sp, $sp, -0x30
    s3 = 0x20 << 16;                                            // 0x0013aea0: lui $s3, 0x20
    func_00141ee0();  // 0x141e50                                // 0x0013aeb4: jal 0x141e50
    a0 = s3 + 0x4084;                                           // 0x0013aeb8: addiu $a0, $s3, 0x4084
    if (v0 == 0) goto label_0x13aef4;                           // 0x0013aebc: beqz $v0, 0x13aef4
    v0 = 0x20 << 16;                                            // 0x0013aec0: lui $v0, 0x20
    s2 = 1;                                                     // 0x0013aec4: addiu $s2, $zero, 1
    s0 = v0 + 0x40f0;                                           // 0x0013aec8: addiu $s0, $v0, 0x40f0
    s1 = 0xc;                                                   // 0x0013aecc: addiu $s1, $zero, 0xc
label_0x13aed0:
    v0 = g_002040f0;  // Global at 0x002040f0                   // 0x0013aed0: lb $v0, 0($s0)
    if (v0 != s2) goto label_0x13aee8;                          // 0x0013aed4: bnel $v0, $s2, 0x13aee8
    s1 = s1 + -1;                                               // 0x0013aed8: addiu $s1, $s1, -1
    func_0013ae98();  // 0x13add0                                // 0x0013aedc: jal 0x13add0
    s1 = s1 + -1;                                               // 0x0013aee4: addiu $s1, $s1, -1
label_0x13aee8:
    if (s1 >= 0) goto label_0x13aed0;                           // 0x0013aee8: bgez $s1, 0x13aed0
    s0 = s0 + 0x30;                                             // 0x0013aeec: addiu $s0, $s0, 0x30
    g_00204084 = 0;  // Global at 0x00204084                    // 0x0013aef0: sw $zero, 0x4084($s3)
label_0x13aef4:
    return;                                                     // 0x0013af08: jr $ra
    sp = sp + 0x30;                                             // 0x0013af0c: addiu $sp, $sp, 0x30
}