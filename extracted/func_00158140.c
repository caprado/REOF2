void func_00158140() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00158140: addiu $sp, $sp, -0x20
    s1 = 2;                                                     // 0x00158154: addiu $s1, $zero, 2
    func_00155f90();  // 155f90                                // 0x0015815c: jal 0x155f90
    a2 = 0x30;                                                  // 0x00158160: addiu $a2, $zero, 0x30
    *(uint32_t*)(s0) = s1;                                      // 0x00158164: sw $s1, 0($s0)
    func_00157ea8();  // 157ea8                                // 0x00158168: jal 0x157ea8
    a0 = s0 + 4;                                                // 0x0015816c: addiu $a0, $s0, 4
    *(uint32_t*)((s0) + 0x10) = s1;                             // 0x00158170: sw $s1, 0x10($s0)
    func_001581c0();  // 1581c0                                // 0x00158174: jal 0x1581c0
    a0 = s0 + 0x14;                                             // 0x00158178: addiu $a0, $s0, 0x14
    func_001581d8();  // 1581d8                                // 0x0015817c: jal 0x1581d8
    a0 = s0 + 0x20;                                             // 0x00158180: addiu $a0, $s0, 0x20
    func_001581d8();  // 1581d8                                // 0x00158184: jal 0x1581d8
    a0 = s0 + 0x40;                                             // 0x00158188: addiu $a0, $s0, 0x40
    func_001581d8();  // 1581d8                                // 0x0015818c: jal 0x1581d8
    a0 = s0 + 0x60;                                             // 0x00158190: addiu $a0, $s0, 0x60
    func_001581d8();  // 1581d8                                // 0x00158194: jal 0x1581d8
    a0 = s0 + 0x80;                                             // 0x00158198: addiu $a0, $s0, 0x80
    func_00158200();  // 158200                                // 0x0015819c: jal 0x158200
    a0 = s0 + 0xa0;                                             // 0x001581a0: addiu $a0, $s0, 0xa0
    return;                                                     // 0x001581b4: jr $ra
    sp = sp + 0x20;                                             // 0x001581b8: addiu $sp, $sp, 0x20
}