void func_0011c918() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0011c918: addiu $sp, $sp, -0x10
    Deci2Call();  // 0x1146f0                                   // 0x0011c920: jal 0x1146f0
    a0 = 4;                                                     // 0x0011c924: addiu $a0, $zero, 4
    v1 = 4 << 16;                                               // 0x0011c928: lui $v1, 4
    v0 = v0 & v1;                                               // 0x0011c92c: and $v0, $v0, $v1
    if (v0 == 0) goto label_0x11c95c;                           // 0x0011c930: beqz $v0, 0x11c95c
    func_00114760();  // 114760                                // 0x0011c938: jal 0x114760
    /* nop */                                                   // 0x0011c93c: nop 
    a0 = 1;                                                     // 0x0011c940: addiu $a0, $zero, 1
    func_0011f490();  // 11f490                                // 0x0011c944: jal 0x11f490
    a1 = 1;                                                     // 0x0011c948: addiu $a1, $zero, 1
    func_0011f490();  // 11f490                                // 0x0011c950: jal 0x11f490
    a1 = 1;                                                     // 0x0011c954: addiu $a1, $zero, 1
    v0 = 1;                                                     // 0x0011c958: addiu $v0, $zero, 1
label_0x11c95c:
    return;                                                     // 0x0011c960: jr $ra
    sp = sp + 0x10;                                             // 0x0011c964: addiu $sp, $sp, 0x10
}