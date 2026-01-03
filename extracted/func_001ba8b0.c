/** @category: game/init @status: complete @author: caprado */
void func_001ba8b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001ba8b0: addiu $sp, $sp, -0x10
    v1 = *(int32_t*)((gp) + -0x7cc0);                           // 0x001ba8b8: lw $v1, -0x7cc0($gp)
    v1 = v1 + -1;                                               // 0x001ba8bc: addiu $v1, $v1, -1
    if (v1 != 0) goto label_0x1ba8d8;                           // 0x001ba8c0: bnez $v1, 0x1ba8d8
    *(uint32_t*)((gp) + -0x7cc0) = v1;                          // 0x001ba8c4: sw $v1, -0x7cc0($gp)
    v0 = 0x14;                                                  // 0x001ba8c8: addiu $v0, $zero, 0x14
    a0 = gp + -0x6358;                                          // 0x001ba8cc: addiu $a0, $gp, -0x6358
    func_00101e20();  // 0x101d28                                // 0x001ba8d0: jal 0x101d28
    *(uint32_t*)((gp) + -0x7cc0) = v0;                          // 0x001ba8d4: sw $v0, -0x7cc0($gp)
label_0x1ba8d8:
    return;                                                     // 0x001ba8dc: jr $ra
    sp = sp + 0x10;                                             // 0x001ba8e0: addiu $sp, $sp, 0x10
}