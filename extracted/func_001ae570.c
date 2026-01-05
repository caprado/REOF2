/** @category: game/init @status: complete @author: caprado */
void func_001ae570() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001ae570: addiu $sp, $sp, -0x10
    a0 = 0x2b << 16;                                            // 0x001ae574: lui $a0, 0x2b
    a0 = a0 + -0x5740;                                          // 0x001ae57c: addiu $a0, $a0, -0x5740
    func_00107c70();  // 107c70                                // 0x001ae584: jal 0x107c70
    a2 = 0x40;                                                  // 0x001ae588: addiu $a2, $zero, 0x40
    *(uint32_t*)((gp) + -0x63c8) = 0;                           // 0x001ae58c: sw $zero, -0x63c8($gp)
    *(uint32_t*)((gp) + -0x63c4) = 0;                           // 0x001ae590: sw $zero, -0x63c4($gp)
    return;                                                     // 0x001ae598: jr $ra
    sp = sp + 0x10;                                             // 0x001ae59c: addiu $sp, $sp, 0x10
}