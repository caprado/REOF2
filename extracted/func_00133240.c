void func_00133240() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00133240: addiu $sp, $sp, -0x20
    if (s0 == 0) goto label_0x133264;                           // 0x00133254: beqz $s0, 0x133264
    if (s1 != 0) goto label_0x133280;                           // 0x0013325c: bnez $s1, 0x133280
    /* nop */                                                   // 0x00133260: nop 
label_0x133264:
    a0 = 0x22 << 16;                                            // 0x00133264: lui $a0, 0x22
    a0 = &str_00223e50;  // "E02080809 ADXT_StartMem2: parameter error" // 0x00133270: addiu $a0, $a0, 0x3e50
    return func_00127de8();  // Tail call                        // 0x00133278: j 0x127d90
    sp = sp + 0x20;                                             // 0x0013327c: addiu $sp, $sp, 0x20
label_0x133280:
    func_00131af8();  // 131af8                                // 0x00133280: jal 0x131af8
    /* nop */                                                   // 0x00133284: nop 
    a0 = *(int32_t*)((s0) + 0xb0);                              // 0x00133288: lw $a0, 0xb0($s0)
    func_0010ac68();  // 10ac68                                // 0x0013328c: jal 0x10ac68
    v1 = *(int32_t*)((s0) + 0xb0);                              // 0x00133294: lw $v1, 0xb0($s0)
    v0 = 0xf << 16;                                             // 0x00133298: lui $v0, 0xf
    a0 = 1;                                                     // 0x0013329c: addiu $a0, $zero, 1
    v0 = v0 | 0xffff;                                           // 0x001332a0: ori $v0, $v0, 0xffff
    *(uint32_t*)((s0) + 0xb4) = v1;                             // 0x001332a4: sw $v1, 0xb4($s0)
    *(uint32_t*)((s0) + 0xc0) = v0;                             // 0x001332a8: sw $v0, 0xc0($s0)
    *(uint8_t*)((s0) + 0xac) = a0;                              // 0x001332ac: sb $a0, 0xac($s0)
    *(uint8_t*)((s0) + 0x98) = 0;                               // 0x001332b0: sb $zero, 0x98($s0)
    *(uint32_t*)((s0) + 0xb8) = 0;                              // 0x001332b4: sw $zero, 0xb8($s0)
    *(uint32_t*)((s0) + 0xbc) = 0;                              // 0x001332b8: sw $zero, 0xbc($s0)
    *(uint8_t*)((s0) + 1) = a0;                                 // 0x001332bc: sb $a0, 1($s0)
    *(uint8_t*)((s0) + 2) = 0;                                  // 0x001332c0: sb $zero, 2($s0)
    return;                                                     // 0x001332d0: jr $ra
    sp = sp + 0x20;                                             // 0x001332d4: addiu $sp, $sp, 0x20
}