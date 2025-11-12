void func_00134880() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00134880: addiu $sp, $sp, -0x10
    v0 = *(int32_t*)((s0) + 8);                                 // 0x00134890: lw $v0, 8($s0)
    /* beqzl $v0, 0x13490c */                                   // 0x00134894: beqzl $v0, 0x13490c
    func_00131c20();  // 0x131bb8                                // 0x0013489c: jal 0x131bb8
    /* nop */                                                   // 0x001348a0: nop 
    /* beqzl $v0, 0x13490c */                                   // 0x001348a4: beqzl $v0, 0x13490c
    v1 = *(int8_t*)((s0) + 2);                                  // 0x001348ac: lb $v1, 2($s0)
    v0 = ((unsigned)v1 < (unsigned)5) ? 1 : 0;                  // 0x001348b0: sltiu $v0, $v1, 5
    /* beqzl $v0, 0x13490c */                                   // 0x001348b4: beqzl $v0, 0x13490c
    v0 = v1 << 2;                                               // 0x001348bc: sll $v0, $v1, 2
    v1 = 0x22 << 16;                                            // 0x001348c0: lui $v1, 0x22
    v1 = v1 + v0;                                               // 0x001348c4: addu $v1, $v1, $v0
    v1 = g_00223fb0;  // Global at 0x00223fb0                   // 0x001348c8: lw $v1, 0x3fb0($v1)
    /* jump to address in v1 */                                 // 0x001348cc: jr $v1
    /* nop */                                                   // 0x001348d0: nop 
    /* nop */                                                   // 0x001348d4: nop 
    func_00130280();  // 0x130278                                // 0x001348d8: jal 0x130278
    a0 = *(int32_t*)((s0) + 8);                                 // 0x001348dc: lw $a0, 8($s0)
    v1 = 3;                                                     // 0x001348e0: addiu $v1, $zero, 3
    if (v0 != v1) goto label_0x13490c;                          // 0x001348e4: bnel $v0, $v1, 0x13490c
    func_0012c940();  // 0x12c910                                // 0x001348ec: jal 0x12c910
    a0 = *(int32_t*)((s0) + 4);                                 // 0x001348f0: lw $a0, 4($s0)
    goto label_0x13490c;                                        // 0x001348f4: b 0x13490c
    /* nop */                                                   // 0x001348fc: nop 
    func_0012c940();  // 0x12c910                                // 0x00134900: jal 0x12c910
    a0 = *(int32_t*)((s0) + 4);                                 // 0x00134904: lw $a0, 4($s0)
label_0x13490c:
    return;                                                     // 0x00134910: jr $ra
    sp = sp + 0x10;                                             // 0x00134914: addiu $sp, $sp, 0x10
}