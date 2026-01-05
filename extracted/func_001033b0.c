/** @category graphics/dma @status complete @author caprado */
void func_001033b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001033b0: addiu $sp, $sp, -0x30
    func_00103020();  // 103020                                // 0x001033c4: jal 0x103020
    func_00102f28();  // 102f28                                // 0x001033d0: jal 0x102f28
    v0 = 0xffff << 16;                                          // 0x001033d8: lui $v0, 0xffff
    v1 = *(int32_t*)((s0) + 0x30);                              // 0x001033dc: lw $v1, 0x30($s0)
    v0 = v0 | 0xffff;                                           // 0x001033e0: ori $v0, $v0, 0xffff
    if (v1 != v0) goto label_0x1033ec;                          // 0x001033e4: bnel $v1, $v0, 0x1033ec
    *(uint32_t*)((s0) + 0x30) = s1;                             // 0x001033e8: sw $s1, 0x30($s0)
label_0x1033ec:
    v0 = *(int32_t*)(s0);                                       // 0x001033ec: lw $v0, 0($s0)
    v1 = -0xd;                                                  // 0x001033f0: addiu $v1, $zero, -0xd
    *(uint32_t*)((s0) + 0x20) = 0;                              // 0x001033f4: sw $zero, 0x20($s0)
    v0 = v0 & v1;                                               // 0x001033f8: and $v0, $v0, $v1
    v0 = v0 | 0x105;                                            // 0x00103400: ori $v0, $v0, 0x105
    *(uint32_t*)(s0) = v0;                                      // 0x00103408: sw $v0, 0($s0)
    return;                                                     // 0x00103410: jr $ra
    sp = sp + 0x30;                                             // 0x00103414: addiu $sp, $sp, 0x30
}