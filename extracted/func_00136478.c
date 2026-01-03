void func_00136478() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_30;
    
    sp = sp + -0x80;                                            // 0x00136478: addiu $sp, $sp, -0x80
    if (s0 != 0) goto label_0x1364a0;                           // 0x00136488: bnez $s0, 0x1364a0
    a0 = 0x22 << 16;                                            // 0x00136490: lui $a0, 0x22
    goto label_0x136514;                                        // 0x00136494: b 0x136514
    a0 = &str_00224760;  // "cvFsMakeDir #2:illegal device name" // 0x00136498: addiu $a0, $a0, 0x4760
    /* nop */                                                   // 0x0013649c: nop 
label_0x1364a0:
    s1 = sp + 0x30;                                             // 0x001364a0: addiu $s1, $sp, 0x30
    func_00135790();  // 135790                                // 0x001364ac: jal 0x135790
    v0 = local_30;                                              // 0x001364b4: lb $v0, 0x30($sp)
    if (v0 != 0) goto label_0x1364d0;                           // 0x001364b8: bnez $v0, 0x1364d0
    a0 = 0x22 << 16;                                            // 0x001364c0: lui $a0, 0x22
    goto label_0x136514;                                        // 0x001364c4: b 0x136514
    a0 = &str_00224760;  // "cvFsMakeDir #2:illegal device name" // 0x001364c8: addiu $a0, $a0, 0x4760
    /* nop */                                                   // 0x001364cc: nop 
label_0x1364d0:
    func_00135548();  // 135548                                // 0x001364d4: jal 0x135548
    /* bnezl $s0, 0x1364f8 */                                   // 0x001364e0: bnezl $s0, 0x1364f8
    v0 = *(int32_t*)((s0) + 0x50);                              // 0x001364e4: lw $v0, 0x50($s0)
    a0 = 0x22 << 16;                                            // 0x001364e8: lui $a0, 0x22
    func_00134ec0();  // 134ec0                                // 0x001364ec: jal 0x134ec0
    a0 = &str_002247b0;  // "cvFsMakeDir #4:vtbl error"         // 0x001364f0: addiu $a0, $a0, 0x47b0
    v0 = *(int32_t*)((s0) + 0x50);                              // 0x001364f4: lw $v0, 0x50($s0)
    /* beqzl $v0, 0x136510 */                                   // 0x001364f8: beqzl $v0, 0x136510
    a0 = 0x22 << 16;                                            // 0x001364fc: lui $a0, 0x22
    /* call function at address in v0 */                        // 0x00136500: jalr $v0
    goto label_0x136524;                                        // 0x00136508: b 0x136524
    a0 = &str_002247d0;  // "cvFsRemoveDir #1:illegal directory name" // 0x00136510: addiu $a0, $a0, 0x47d0
label_0x136514:
    func_00134ec0();  // 134ec0                                // 0x00136514: jal 0x134ec0
    /* nop */                                                   // 0x00136518: nop 
    v0 = -1;                                                    // 0x0013651c: addiu $v0, $zero, -1
label_0x136524:
    return;                                                     // 0x0013652c: jr $ra
    sp = sp + 0x80;                                             // 0x00136530: addiu $sp, $sp, 0x80
}