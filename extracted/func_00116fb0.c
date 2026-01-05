/** @category system/ps2 @status complete @author caprado */
void func_00116fb0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = *(int32_t*)((a0) + 0x10);                              // 0x00116fb0: lw $v1, 0x10($a0)
    v0 = 0xffff << 16;                                          // 0x00116fb4: lui $v0, 0xffff
    v0 = v0 | 0xfffe;                                           // 0x00116fb8: ori $v0, $v0, 0xfffe
    *(uint32_t*)((a0) + 0x18) = 0;                              // 0x00116fbc: sw $zero, 0x18($a0)
    v1 = v1 & v0;                                               // 0x00116fc0: and $v1, $v1, $v0
    return;                                                     // 0x00116fc4: jr $ra
    *(uint32_t*)((a0) + 0x10) = v1;                             // 0x00116fc8: sw $v1, 0x10($a0)
}