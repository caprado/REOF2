void func_00135940() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00135940: addiu $sp, $sp, -0x10
    if (s0 != 0) goto label_0x135970;                           // 0x0013594c: bnez $s0, 0x135970
    a0 = 0x22 << 16;                                            // 0x00135954: lui $a0, 0x22
    a0 = &str_002241d8;  // "cvFsClose #2:vtbl error"           // 0x00135960: addiu $a0, $a0, 0x41d8
    return func_00134fb0();  // Tail call                        // 0x00135964: j 0x134ec0
    sp = sp + 0x10;                                             // 0x00135968: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0013596c: nop 
label_0x135970:
    v0 = *(int32_t*)(s0);                                       // 0x00135970: lw $v0, 0($s0)
    v0 = *(int32_t*)((v0) + 0x14);                              // 0x00135974: lw $v0, 0x14($v0)
    /* beqzl $v0, 0x1359a0 */                                   // 0x00135978: beqzl $v0, 0x1359a0
    a0 = 0x22 << 16;                                            // 0x0013597c: lui $a0, 0x22
    /* call function at address in v0 */                        // 0x00135980: jalr $v0
    a0 = *(int32_t*)((s0) + 4);                                 // 0x00135984: lw $a0, 4($s0)
    return func_00135790();  // Tail call                        // 0x00135994: j 0x135780
    sp = sp + 0x10;                                             // 0x00135998: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0013599c: nop 
    a0 = &str_002241f8;  // "cvFsTell #1:handle error"          // 0x001359a8: addiu $a0, $a0, 0x41f8
    return func_00134fb0();  // Tail call                        // 0x001359ac: j 0x134ec0
    sp = sp + 0x10;                                             // 0x001359b0: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x001359b4: nop 
    sp = sp + -0x10;                                            // 0x001359b8: addiu $sp, $sp, -0x10
    if (a0 != 0) goto label_0x1359e0;                           // 0x001359c0: bnez $a0, 0x1359e0
    a0 = 0x22 << 16;                                            // 0x001359c8: lui $a0, 0x22
    func_00134fb0();  // 0x134ec0                                // 0x001359cc: jal 0x134ec0
    a0 = &str_00224210;  // "cvFsTell #2:vtbl error"            // 0x001359d0: addiu $a0, $a0, 0x4210
    goto label_0x135a10;                                        // 0x001359d4: b 0x135a10
    /* nop */                                                   // 0x001359dc: nop 
label_0x1359e0:
    v0 = str_00224210;  // "cvFsTell #2:vtbl error"             // 0x001359e0: lw $v0, 0($a0)
    v0 = *(int32_t*)((v0) + 0x1c);                              // 0x001359e4: lw $v0, 0x1c($v0)
    /* beqzl $v0, 0x135a00 */                                   // 0x001359e8: beqzl $v0, 0x135a00
    a0 = 0x22 << 16;                                            // 0x001359ec: lui $a0, 0x22
    /* call function at address in v0 */                        // 0x001359f0: jalr $v0
    a0 = g_00220004;  // Global at 0x00220004                   // 0x001359f4: lw $a0, 4($a0)
    goto label_0x135a0c;                                        // 0x001359f8: b 0x135a0c
    func_00134fb0();  // 0x134ec0                                // 0x00135a04: jal 0x134ec0
    a0 = &str_00224230;  // "cvFsSeek #1:handle error"          // 0x00135a08: addiu $a0, $a0, 0x4230
label_0x135a0c:
label_0x135a10:
    return;                                                     // 0x00135a18: jr $ra
    sp = sp + 0x10;                                             // 0x00135a1c: addiu $sp, $sp, 0x10
}