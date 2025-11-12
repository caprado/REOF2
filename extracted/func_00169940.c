void func_00169940() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00169940: addiu $sp, $sp, -0x10
    v0 = *(int32_t*)((a0) + 8);                                 // 0x00169948: lw $v0, 8($a0)
    if (v0 != 0) goto label_0x169958;                           // 0x0016994c: bnez $v0, 0x169958
    *(uint32_t*)((a0) + 8) = v1;                                // 0x00169954: sw $v1, 8($a0)
label_0x169958:
    if (v1 == 0) goto label_0x169978;                           // 0x00169958: beqz $v1, 0x169978
    v0 = *(int32_t*)(a0);                                       // 0x00169960: lw $v0, 0($a0)
    if (v0 == 0) goto label_0x169978;                           // 0x00169964: beqz $v0, 0x169978
    /* nop */                                                   // 0x00169968: nop 
    /* call function at address in v0 */                        // 0x0016996c: jalr $v0
    a0 = *(int32_t*)((a0) + 4);                                 // 0x00169970: lw $a0, 4($a0)
label_0x169978:
    return;                                                     // 0x00169978: jr $ra
    sp = sp + 0x10;                                             // 0x0016997c: addiu $sp, $sp, 0x10
}