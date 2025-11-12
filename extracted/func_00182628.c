void func_00182628() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = *(int8_t*)(a1);                                        // 0x00182630: lb $v0, 0($a1)
    if (v0 == 0) goto label_0x182664;                           // 0x00182634: beqz $v0, 0x182664
    v1 = *(uint8_t*)(a1);                                       // 0x00182638: lbu $v1, 0($a1)
    /* nop */                                                   // 0x0018263c: nop 
label_0x182640:
    v0 = v1 << 0x18;                                            // 0x00182640: sll $v0, $v1, 0x18
    a1 = a1 + 1;                                                // 0x00182644: addiu $a1, $a1, 1
    v0 = v0 >> 0x18;                                            // 0x00182648: sra $v0, $v0, 0x18
    v1 = a2 + 1;                                                // 0x0018264c: addiu $v1, $a2, 1
    v0 = v0 ^ 0x2f;                                             // 0x00182650: xori $v0, $v0, 0x2f
    a0 = *(int8_t*)(a1);                                        // 0x00182654: lb $a0, 0($a1)
    if (v0 == 0) a2 = v1;                                       // 0x00182658: movz $a2, $v1, $v0
    if (a0 != 0) goto label_0x182640;                           // 0x0018265c: bnez $a0, 0x182640
    v1 = *(uint8_t*)(a1);                                       // 0x00182660: lbu $v1, 0($a1)
label_0x182664:
    return;                                                     // 0x00182664: jr $ra
}