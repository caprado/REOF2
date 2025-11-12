void func_0015e008() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x0015e008: addiu $sp, $sp, -0x30
    func_0015fcb0();  // 0x15fc80                                // 0x0015e020: jal 0x15fc80
    if (v0 != 0) goto label_0x15e058;                           // 0x0015e028: bnez $v0, 0x15e058
    a0 = 0x22 << 16;                                            // 0x0015e030: lui $a0, 0x22
    a0 = &str_002275a8;  // "E1122618: mwPlyIsNextFrmReady: handle is invalid." // 0x0015e03c: addiu $a0, $a0, 0x75a8
    return func_001634a8();  // Tail call                        // 0x0015e04c: j 0x163410
    sp = sp + 0x30;                                             // 0x0015e050: addiu $sp, $sp, 0x30
    /* nop */                                                   // 0x0015e054: nop 
label_0x15e058:
    s2 = *(int32_t*)((s3) + 0x7c);                              // 0x0015e058: lw $s2, 0x7c($s3)
    s0 = *(int32_t*)((s3) + 0x80);                              // 0x0015e05c: lw $s0, 0x80($s3)
    func_0015f820();  // 0x15f7e0                                // 0x0015e060: jal 0x15f7e0
    s1 = *(int32_t*)((s3) + 0x78);                              // 0x0015e064: lw $s1, 0x78($s3)
    s0 = (s0 < s2) ? 1 : 0;                                     // 0x0015e068: slt $s0, $s0, $s2
    if (s0 == 0) goto label_0x15e090;                           // 0x0015e070: beqz $s0, 0x15e090
    func_00173d60();  // 0x173cf0                                // 0x0015e078: jal 0x173cf0
    /* nop */                                                   // 0x0015e07c: nop 
    v1 = *(int32_t*)((s3) + 0x80);                              // 0x0015e080: lw $v1, 0x80($s3)
    v1 = v1 + 1;                                                // 0x0015e084: addiu $v1, $v1, 1
    *(uint32_t*)((s3) + 0x7c) = v1;                             // 0x0015e088: sw $v1, 0x7c($s3)
    *(uint32_t*)((s3) + 0x80) = v1;                             // 0x0015e08c: sw $v1, 0x80($s3)
label_0x15e090:
    return;                                                     // 0x0015e0a4: jr $ra
    sp = sp + 0x30;                                             // 0x0015e0a8: addiu $sp, $sp, 0x30
}