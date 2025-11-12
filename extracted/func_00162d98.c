void func_00162d98() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00162d98: addiu $sp, $sp, -0x20
    func_00163140();  // 0x163100                                // 0x00162dac: jal 0x163100
    v1 = 1;                                                     // 0x00162db4: addiu $v1, $zero, 1
    if (v0 != v1) goto label_0x162de8;                          // 0x00162db8: bnel $v0, $v1, 0x162de8
    func_00163100();  // 0x1630e0                                // 0x00162dc0: jal 0x1630e0
    /* nop */                                                   // 0x00162dc4: nop 
    if (v0 == 0) goto label_0x162de4;                           // 0x00162dc8: beqz $v0, 0x162de4
    a0 = *(int32_t*)((s0) + 0x14);                              // 0x00162dcc: lw $a0, 0x14($s0)
    v0 = *(int32_t*)((v0) + 0x28);                              // 0x00162dd0: lw $v0, 0x28($v0)
    /* beqzl $v0, 0x162de8 */                                   // 0x00162dd4: beqzl $v0, 0x162de8
    /* call function at address in v0 */                        // 0x00162ddc: jalr $v0
label_0x162de4:
label_0x162de8:
    return;                                                     // 0x00162df0: jr $ra
    sp = sp + 0x20;                                             // 0x00162df4: addiu $sp, $sp, 0x20
}