void func_001629e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001629e0: addiu $sp, $sp, -0x10
    func_001630d0();  // 1630d0                                // 0x001629ec: jal 0x1630d0
    /* nop */                                                   // 0x001629f0: nop 
    func_001630e0();  // 1630e0                                // 0x001629f4: jal 0x1630e0
    /* beqzl $v1, 0x162a38 */                                   // 0x00162a00: beqzl $v1, 0x162a38
    v0 = *(int32_t*)((s0) + 4);                                 // 0x00162a08: lw $v0, 4($s0)
    /* bnezl $v0, 0x162a38 */                                   // 0x00162a0c: bnezl $v0, 0x162a38
    v1 = *(int32_t*)(v1);                                       // 0x00162a14: lw $v1, 0($v1)
    /* beqzl $v1, 0x162a30 */                                   // 0x00162a18: beqzl $v1, 0x162a30
    v0 = v0 + 1;                                                // 0x00162a1c: addiu $v0, $v0, 1
    /* call function at address in v1 */                        // 0x00162a20: jalr $v1
    /* nop */                                                   // 0x00162a24: nop 
    v0 = *(int32_t*)((s0) + 4);                                 // 0x00162a28: lw $v0, 4($s0)
    v0 = v0 + 1;                                                // 0x00162a2c: addiu $v0, $v0, 1
    *(uint32_t*)((s0) + 4) = v0;                                // 0x00162a30: sw $v0, 4($s0)
    return;                                                     // 0x00162a3c: jr $ra
    sp = sp + 0x10;                                             // 0x00162a40: addiu $sp, $sp, 0x10
}