void func_00162a48() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00162a48: addiu $sp, $sp, -0x10
    func_001630d0();  // 1630d0                                // 0x00162a54: jal 0x1630d0
    /* nop */                                                   // 0x00162a58: nop 
    func_001630e0();  // 1630e0                                // 0x00162a5c: jal 0x1630e0
    /* beqzl $a0, 0x162a9c */                                   // 0x00162a68: beqzl $a0, 0x162a9c
    v0 = *(int32_t*)((s0) + 4);                                 // 0x00162a70: lw $v0, 4($s0)
    if (v0 == 0) goto label_0x162a98;                           // 0x00162a74: beqz $v0, 0x162a98
    v1 = v0 + -1;                                               // 0x00162a78: addiu $v1, $v0, -1
    if (v1 != 0) goto label_0x162a98;                           // 0x00162a7c: bnez $v1, 0x162a98
    *(uint32_t*)((s0) + 4) = v1;                                // 0x00162a80: sw $v1, 4($s0)
    v0 = *(int32_t*)((a0) + 4);                                 // 0x00162a84: lw $v0, 4($a0)
    /* beqzl $v0, 0x162a9c */                                   // 0x00162a88: beqzl $v0, 0x162a9c
    /* call function at address in v0 */                        // 0x00162a90: jalr $v0
    /* nop */                                                   // 0x00162a94: nop 
label_0x162a98:
    return;                                                     // 0x00162aa0: jr $ra
    sp = sp + 0x10;                                             // 0x00162aa4: addiu $sp, $sp, 0x10
}