void func_00136900() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4, local_8;
    
    sp = sp + -0x50;                                            // 0x00136900: addiu $sp, $sp, -0x50
    if (a0 != 0) goto label_0x136940;                           // 0x00136920: bnez $a0, 0x136940
    a0 = 0x22 << 16;                                            // 0x00136928: lui $a0, 0x22
    func_00134fb0();  // 0x134ec0                                // 0x0013692c: jal 0x134ec0
    a0 = &str_00224a40;  // "cvFsAddVolumeEx #2:illegal volume name" // 0x00136930: addiu $a0, $a0, 0x4a40
    goto label_0x1369ec;                                        // 0x00136934: b 0x1369ec
    v0 = -1;                                                    // 0x00136938: addiu $v0, $zero, -1
    /* nop */                                                   // 0x0013693c: nop 
label_0x136940:
    if (s2 != 0) goto label_0x136960;                           // 0x00136940: bnez $s2, 0x136960
    /* nop */                                                   // 0x00136944: nop 
    a0 = 0x22 << 16;                                            // 0x00136948: lui $a0, 0x22
    func_00134fb0();  // 0x134ec0                                // 0x0013694c: jal 0x134ec0
    a0 = &str_00224a68;  // "cvFsAddVolumeEx #3:illegal image handle" // 0x00136950: addiu $a0, $a0, 0x4a68
    goto label_0x1369ec;                                        // 0x00136954: b 0x1369ec
    v0 = -1;                                                    // 0x00136958: addiu $v0, $zero, -1
    /* nop */                                                   // 0x0013695c: nop 
label_0x136960:
    if (s1 != 0) goto label_0x136980;                           // 0x00136960: bnez $s1, 0x136980
    /* nop */                                                   // 0x00136964: nop 
    a0 = 0x22 << 16;                                            // 0x00136968: lui $a0, 0x22
    func_00134fb0();  // 0x134ec0                                // 0x0013696c: jal 0x134ec0
    a0 = &str_00224a90;  // "cvFsAddVolumeEx #3:device not found" // 0x00136970: addiu $a0, $a0, 0x4a90
    goto label_0x1369ec;                                        // 0x00136974: b 0x1369ec
    v0 = -1;                                                    // 0x00136978: addiu $v0, $zero, -1
    /* nop */                                                   // 0x0013697c: nop 
label_0x136980:
    func_001352b8();  // 0x135220                                // 0x00136980: jal 0x135220
    /* nop */                                                   // 0x00136984: nop 
    /* bnezl $s0, 0x1369a8 */                                   // 0x0013698c: bnezl $s0, 0x1369a8
    a0 = 0x22 << 16;                                            // 0x00136994: lui $a0, 0x22
    func_00134fb0();  // 0x134ec0                                // 0x00136998: jal 0x134ec0
    a0 = &str_00224ab8;  // "cvFsDelVolume #1:illegal device name" // 0x0013699c: addiu $a0, $a0, 0x4ab8
    goto label_0x1369ec;                                        // 0x001369a0: b 0x1369ec
    v0 = -1;                                                    // 0x001369a4: addiu $v0, $zero, -1
    func_00107d30();  // 0x107c70                                // 0x001369ac: jal 0x107c70
    a2 = 0x14;                                                  // 0x001369b0: addiu $a2, $zero, 0x14
    local_0 = s1;                                               // 0x001369b4: sw $s1, 0($sp)
    local_4 = s2;                                               // 0x001369b8: sw $s2, 4($sp)
    local_8 = s3;                                               // 0x001369bc: sw $s3, 8($sp)
    v0 = *(int32_t*)((s0) + 0x60);                              // 0x001369c0: lw $v0, 0x60($s0)
    if (v0 == 0) goto label_0x1369e8;                           // 0x001369c4: beqz $v0, 0x1369e8
    a1 = 2;                                                     // 0x001369cc: addiu $a1, $zero, 2
    /* call function at address in v0 */                        // 0x001369d4: jalr $v0
    goto label_0x1369f0;                                        // 0x001369dc: b 0x1369f0
    /* nop */                                                   // 0x001369e4: nop 
label_0x1369e8:
    v0 = -1;                                                    // 0x001369e8: addiu $v0, $zero, -1
label_0x1369ec:
label_0x1369f0:
    return;                                                     // 0x00136a00: jr $ra
    sp = sp + 0x50;                                             // 0x00136a04: addiu $sp, $sp, 0x50
}