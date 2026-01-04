/** @category game/init @status complete @author caprado */
void func_001ae5a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = *(uint8_t*)((gp) + -0x6357);                           // 0x001ae5a0: lbu $v1, -0x6357($gp)
    *(uint8_t*)((gp) + -0x63c0) = 0;                            // 0x001ae5a4: sb $zero, -0x63c0($gp)
    *(uint16_t*)((gp) + -0x6340) = v1;                          // 0x001ae5a8: sh $v1, -0x6340($gp)
    return;                                                     // 0x001ae5ac: jr $ra
    *(uint16_t*)((gp) + -0x6344) = v1;                          // 0x001ae5b0: sh $v1, -0x6344($gp)
}