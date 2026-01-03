void func_001735e8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001735e8: addiu $sp, $sp, -0x20
    s0 = s1 + 0x94c;                                            // 0x00173604: addiu $s0, $s1, 0x94c
    v0 = *(int32_t*)((s0) + 4);                                 // 0x00173608: lw $v0, 4($s0)
    v0 = v0 + a1;                                               // 0x0017360c: addu $v0, $v0, $a1
    a1 = 0x25;                                                  // 0x00173610: addiu $a1, $zero, 0x25
    func_001752e8();  // 1752e8                                // 0x00173614: jal 0x1752e8
    *(uint32_t*)((s0) + 4) = v0;                                // 0x00173618: sw $v0, 4($s0)
    if (v0 == 0) goto label_0x173634;                           // 0x00173624: beqz $v0, 0x173634
    /* call function at address in v0 */                        // 0x0017362c: jalr $v0
    /* nop */                                                   // 0x00173630: nop 
label_0x173634:
    return;                                                     // 0x00173644: jr $ra
    sp = sp + 0x20;                                             // 0x00173648: addiu $sp, $sp, 0x20
}