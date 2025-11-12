void func_00130318() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00130318: addiu $sp, $sp, -0x10
    func_001261b8();  // 0x1261a0                                // 0x00130324: jal 0x1261a0
    func_00130318();  // 0x1302e0                                // 0x0013032c: jal 0x1302e0
    v0 = 0xf << 16;                                             // 0x00130334: lui $v0, 0xf
    v0 = v0 | 0xffff;                                           // 0x00130338: ori $v0, $v0, 0xffff
    func_001261d0();  // 0x1261b8                                // 0x0013033c: jal 0x1261b8
    *(uint32_t*)((s0) + 0x58) = v0;                             // 0x00130340: sw $v0, 0x58($s0)
    v0 = 1;                                                     // 0x00130344: addiu $v0, $zero, 1
    return;                                                     // 0x00130350: jr $ra
    sp = sp + 0x10;                                             // 0x00130354: addiu $sp, $sp, 0x10
}