/** @category game/frame @status complete @author caprado */
void func_001ae8d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001ae8d0: addiu $sp, $sp, -0x10
    v1 = *(int32_t*)((gp) + -0x6360);                           // 0x001ae8d8: lw $v1, -0x6360($gp)
    if (v1 != 0) goto label_0x1ae8f8;                           // 0x001ae8dc: bnez $v1, 0x1ae8f8
    /* nop */                                                   // 0x001ae8e0: nop 
    func_00195e90();  // 195e90                                // 0x001ae8e4: jal 0x195e90
    /* nop */                                                   // 0x001ae8e8: nop 
    v1 = *(int32_t*)((gp) + -0x6360);                           // 0x001ae8ec: lw $v1, -0x6360($gp)
    v1 = v1 + 1;                                                // 0x001ae8f0: addiu $v1, $v1, 1
    *(uint32_t*)((gp) + -0x6360) = v1;                          // 0x001ae8f4: sw $v1, -0x6360($gp)
label_0x1ae8f8:
    return;                                                     // 0x001ae8fc: jr $ra
    sp = sp + 0x10;                                             // 0x001ae900: addiu $sp, $sp, 0x10
}