/** @category system/sync @status complete @author caprado */
void func_001a8960() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = *(int32_t*)((gp) + -0x64d4);                           // 0x001a8960: lw $v1, -0x64d4($gp)
    if (v1 != 0) goto label_0x1a897c;                           // 0x001a8964: bnez $v1, 0x1a897c
    /* nop */                                                   // 0x001a8968: nop 
    v1 = 1;                                                     // 0x001a896c: addiu $v1, $zero, 1
    at = 0x29 << 16;                                            // 0x001a8970: lui $at, 0x29
    goto label_0x1a8984;                                        // 0x001a8974: b 0x1a8984
    g_0028ffd0 = v1;  // Global at 0x0028ffd0                   // 0x001a8978: sw $v1, -0x30($at)
label_0x1a897c:
    v1 = v1 + -1;                                               // 0x001a897c: addiu $v1, $v1, -1
    *(uint32_t*)((gp) + -0x64d4) = v1;                          // 0x001a8980: sw $v1, -0x64d4($gp)
label_0x1a8984:
    return;                                                     // 0x001a8984: jr $ra
    /* nop */                                                   // 0x001a8988: nop 
}