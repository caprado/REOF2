void func_0012d338() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0012d338: addiu $sp, $sp, -0x20
    v0 = 0x20 << 16;                                            // 0x0012d33c: lui $v0, 0x20
    s0 = v0 + -0x1c78;                                          // 0x0012d348: addiu $s0, $v0, -0x1c78
    s1 = 0xf;                                                   // 0x0012d350: addiu $s1, $zero, 0xf
    s2 = 1;                                                     // 0x0012d358: addiu $s2, $zero, 1
    /* nop */                                                   // 0x0012d35c: nop 
label_0x12d360:
    v0 = g_001fe388;  // Global at 0x001fe388                   // 0x0012d360: lb $v0, 0($s0)
    if (v0 != s2) goto label_0x12d378;                          // 0x0012d364: bnel $v0, $s2, 0x12d378
    s1 = s1 + -1;                                               // 0x0012d368: addiu $s1, $s1, -1
    func_0012d2f8();  // 12d2f8                                // 0x0012d36c: jal 0x12d2f8
    s1 = s1 + -1;                                               // 0x0012d374: addiu $s1, $s1, -1
label_0x12d378:
    if (s1 >= 0) goto label_0x12d360;                           // 0x0012d378: bgez $s1, 0x12d360
    s0 = s0 + 0x9c;                                             // 0x0012d37c: addiu $s0, $s0, 0x9c
    return;                                                     // 0x0012d390: jr $ra
    sp = sp + 0x20;                                             // 0x0012d394: addiu $sp, $sp, 0x20
}