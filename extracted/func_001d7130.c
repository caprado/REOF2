void func_001d7130() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001d7130: addiu $sp, $sp, -0x10
    a0 = 0x15;                                                  // 0x001d7134: addiu $a0, $zero, 0x15
    func_001aefe0();  // 0x1aefd0                                // 0x001d713c: jal 0x1aefd0
    a1 = 2;                                                     // 0x001d7140: addiu $a1, $zero, 2
    a0 = 1;                                                     // 0x001d7144: addiu $a0, $zero, 1
    func_001aefe0();  // 0x1aefd0                                // 0x001d7148: jal 0x1aefd0
    a1 = 0x800;                                                 // 0x001d714c: addiu $a1, $zero, 0x800
    a0 = 0x12;                                                  // 0x001d7150: addiu $a0, $zero, 0x12
    func_001aefe0();  // 0x1aefd0                                // 0x001d7154: jal 0x1aefd0
    a1 = 0 | 0x8000;                                            // 0x001d7158: ori $a1, $zero, 0x8000
    a0 = 0xc;                                                   // 0x001d715c: addiu $a0, $zero, 0xc
    func_001aefe0();  // 0x1aefd0                                // 0x001d7160: jal 0x1aefd0
    a0 = 0x66;                                                  // 0x001d7168: addiu $a0, $zero, 0x66
    func_001aefe0();  // 0x1aefd0                                // 0x001d716c: jal 0x1aefd0
    a1 = 1;                                                     // 0x001d7170: addiu $a1, $zero, 1
    a0 = 0x62;                                                  // 0x001d7174: addiu $a0, $zero, 0x62
    func_001aefe0();  // 0x1aefd0                                // 0x001d7178: jal 0x1aefd0
    a1 = 1;                                                     // 0x001d717c: addiu $a1, $zero, 1
    func_001aefe0();  // 0x1aefd0                                // 0x001d7184: jal 0x1aefd0
    a0 = 2;                                                     // 0x001d718c: addiu $a0, $zero, 2
    func_001aefe0();  // 0x1aefd0                                // 0x001d7190: jal 0x1aefd0
    return;                                                     // 0x001d719c: jr $ra
    sp = sp + 0x10;                                             // 0x001d71a0: addiu $sp, $sp, 0x10
}