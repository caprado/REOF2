void func_00169640() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a0 = a0 + 0x78;                                             // 0x00169640: addiu $a0, $a0, 0x78
    v1 = *(int32_t*)(a0);                                       // 0x00169644: lw $v1, 0($a0)
    if (v1 == 0) goto label_0x169670;                           // 0x00169648: beqz $v1, 0x169670
    v1 = *(int32_t*)((a0) + 4);                                 // 0x00169650: lw $v1, 4($a0)
    a0 = *(int32_t*)((a0) + 8);                                 // 0x00169654: lw $a0, 8($a0)
    v0 = v1 << 1;                                               // 0x00169658: sll $v0, $v1, 1
    v0 = v0 + v1;                                               // 0x0016965c: addu $v0, $v0, $v1
    v0 = v0 << 3;                                               // 0x00169660: sll $v0, $v0, 3
    v0 = v0 + v1;                                               // 0x00169664: addu $v0, $v0, $v1
    v0 = v0 << 2;                                               // 0x00169668: sll $v0, $v0, 2
    v0 = v0 + a0;                                               // 0x0016966c: addu $v0, $v0, $a0
label_0x169670:
    return;                                                     // 0x00169670: jr $ra
    /* nop */                                                   // 0x00169674: nop 
}