void func_00161608() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00161608: addiu $sp, $sp, -0x10
    v0 = *(int32_t*)((a0) + 0xe8);                              // 0x00161610: lw $v0, 0xe8($a0)
    if (v0 == 0) goto label_0x16162c;                           // 0x00161614: beqz $v0, 0x16162c
    v0 = *(int32_t*)(v0);                                       // 0x0016161c: lw $v0, 0($v0)
    v1 = *(int32_t*)((v0) + 0xc);                               // 0x00161620: lw $v1, 0xc($v0)
    /* call function at address in v1 */                        // 0x00161624: jalr $v1
    /* nop */                                                   // 0x00161628: nop 
label_0x16162c:
    return;                                                     // 0x00161630: jr $ra
    sp = sp + 0x10;                                             // 0x00161634: addiu $sp, $sp, 0x10
}