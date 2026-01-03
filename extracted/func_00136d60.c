void func_00136d60() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00136d60: addiu $sp, $sp, -0x20
    if (s1 != 0) goto label_0x136d90;                           // 0x00136d74: bnez $s1, 0x136d90
    a0 = 0x22 << 16;                                            // 0x00136d7c: lui $a0, 0x22
    func_00134ec0();  // 134ec0                                // 0x00136d80: jal 0x134ec0
    a0 = &str_00224c60;  // "cvFsGetFsys64Info #1:handle error" // 0x00136d84: addiu $a0, $a0, 0x4c60
    goto label_0x136de4;                                        // 0x00136d88: b 0x136de4
label_0x136d90:
    v0 = *(int32_t*)(s1);                                       // 0x00136d90: lw $v0, 0($s1)
    v0 = *(int32_t*)((v0) + 0x60);                              // 0x00136d94: lw $v0, 0x60($v0)
    if (v0 == 0) goto label_0x136de0;                           // 0x00136d98: beqz $v0, 0x136de0
    a1 = 0xc8;                                                  // 0x00136d9c: addiu $a1, $zero, 0xc8
    a0 = *(int32_t*)((s1) + 4);                                 // 0x00136da0: lw $a0, 4($s1)
    /* call function at address in v0 */                        // 0x00136da8: jalr $v0
    v1 = *(int32_t*)(s1);                                       // 0x00136db0: lw $v1, 0($s1)
    a0 = *(int32_t*)((s1) + 4);                                 // 0x00136db8: lw $a0, 4($s1)
    v0 = *(int32_t*)((v1) + 0x60);                              // 0x00136dbc: lw $v0, 0x60($v1)
    a1 = 0xc9;                                                  // 0x00136dc0: addiu $a1, $zero, 0xc9
    /* call function at address in v0 */                        // 0x00136dc8: jalr $v0
label_0x136de0:
label_0x136de4:
    return;                                                     // 0x00136df0: jr $ra
    sp = sp + 0x20;                                             // 0x00136df4: addiu $sp, $sp, 0x20
}